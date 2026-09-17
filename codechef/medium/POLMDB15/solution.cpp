// 1. Connect to the 'store_db' database
db = connect('mongodb://localhost:27017/store_db');

// 2. Use insertMany to add both documents to the 'products' collection
db.products.insertMany([
    {
        name: "Galaxy S24",
        category: "Electronics",
        specs: { 
            ram: "8GB", 
            storage: "256GB" 
        }
    },
    {
        name: "Gaming Credits",
        value: 50,
        currency: "USD",
        redeemable: true
    }
]);

// 3. Verification
const count = db.products.countDocuments();
const allProducts = db.products.find().toArray();

print("Total documents in 'products' collection: " + count);
printjson(allProducts);