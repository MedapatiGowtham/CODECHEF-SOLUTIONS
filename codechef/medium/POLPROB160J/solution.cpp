db.articles.drop();
db.paginatedArticles.drop();

// Insert sample dataset (run once)
db.articles.insertMany([
  { title: "Intro to MongoDB", author: "Alice", views: 120 },
  { title: "Mastering Aggregation", author: "Bob", views: 450 },
  { title: "Indexes Explained", author: "Charlie", views: 300 },
  { title: "Schema Design", author: "Daisy", views: 280 },
  { title: "Transactions in MongoDB", author: "Eve", views: 600 },
  { title: "Sharding Deep Dive", author: "Frank", views: 150 }
]);

// Aggregation pipeline (Solution: Apply pagination)
var pagedb = db.articles.aggregate([
  { $skip: 2 },   // Skip first 2 documents
  { $limit: 3 }   // Limit to next 3 documents
]).toArray();

// Print result
printjson(pagedb);

// Store result in separate collection
db.paginatedArticles.insertMany(pagedb);
