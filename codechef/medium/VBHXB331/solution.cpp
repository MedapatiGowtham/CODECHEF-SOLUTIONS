// 1. Import the express library
import express from "express";

// 2. Initialize the Express application
const app = express();

// 3. Define the PORT number
const PORT = 8080;

// 4. Create a basic route for the root URL
app.get("/", (req, res) => {
    res.send("Blog API is running...");
    });

    // 5. Start the server and listen on the defined PORT
    app.listen(PORT, () => {
        console.log("Server running on port 8080");
        });