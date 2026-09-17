# POLMDB15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Tech Store Catalog

You are developing a backend for an electronics store. You need to store different types of inventory—specifically Smartphones and Gift Cards—in a single collection named `products`.

 **Task** 
Write a script in `index.js` to insert two distinct documents into the `products` collection within a database named `store_db`.

 **Document 1 (Smartphone)** 

- name: "Galaxy S24"
- category: "Electronics"
- specs: { "ram": "8GB", "storage": "256GB" } (nested document)

 **Document 2 (Gift Card)** 

- name: "Gaming Credits"
- value: 50
- currency: "USD"
- redeemable: true

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T09:03:58.665Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB15)