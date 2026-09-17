db = connect('mongodb://localhost:27017/store_db');

db.products.insertOne({
    itemName: "Ultra-Vision Monitor",
    price: 15000,
    discountPercentage: 20,
    saleEnd: "2026-02-15",
    category: "Electronics"
});

db.products.updateOne(
    { itemName: "Ultra-Vision Monitor" },
    { 
        $set: { 
            price: 20000, 
            lastUpdated: new Date() 
        },
        $unset: { 
            discountPercentage: "", 
            saleEnd: "" 
        }
    }
);

const finalProduct = db.products.findOne({ itemName: "Ultra-Vision Monitor" });
print("--- Final Product Status ---");
printjson(finalProduct);