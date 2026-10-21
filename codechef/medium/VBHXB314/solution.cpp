
// URL Versioning
// If the user visits /api/v1/products , return v1 products: ["Apple", "Banana"]
app.get("/api/v1/products", (req, res) => {
  res.json({ version: "v1", products: ["Apple", "Banana"] });
  });

  // If the user visits /api/v2/products , return v2 products: ["Laptop", "Phone"]
  app.get("/api/v2/products", (req, res) => {
    res.json({ version: "v2", products: ["Laptop", "Phone"] });
    });

    // Query Parameter Versioning
    // If the user visits /api/products?version=____ , return a product from that version
    app.get("/api/products", (req, res) => {
      const version = req.query.version || "1";
        res.json({ version: `v${version}`, products: [`Product from Query v${version}`] });
        });

        // Header Versioning
        // If the user sends a request to /api/products-header with header API-Version: ____ , return the correct product
        app.get("/api/products-header", (req, res) => {
          const version = req.headers["api-version"] || "1";
            res.json({ version: `v${version}`, products: [`Product from Header v${version}`] });
            });

            // Start the server
            app.listen(8080, () => console.log("✅ Backend running at http://localhost:8080"));