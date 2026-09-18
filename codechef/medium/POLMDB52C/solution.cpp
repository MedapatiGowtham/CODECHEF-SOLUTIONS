
// Create compound index (status ASC, totalAmount DESC)
db.orders.createIndex({
  status: 1,
  totalAmount: -1
});

// Query using both fields
db.orders.find({
  status: "Delivered",
  totalAmount: { $gt: 400 }
}).forEach(doc => printjson(doc));


print("Step 3: Multikey Index");

// Create index on array field
db.orders.createIndex({ items: 1 });

// Query array field
db.orders.find({
  items: "Burger"
}).forEach(doc => printjson(doc));

