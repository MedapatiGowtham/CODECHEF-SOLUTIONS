  {
    $group: {
      _id: "$customer",
      avgOrderValue: { $avg: "$orderValue" }
    }
  }
]).toArray();
print("Problem 3 Output:");
printjson(problem3);
db.problemResults.insertOne({ problem: 3, output: problem3 });

// Problem 4: Count delivered orders
let problem4 = db.orders.aggregate([
  { $match: { status: "Delivered" } },
  {
    $group: {
      _id: "DeliveredOrders",
      totalDelivered: { $sum: 1 }
    }
  }
]).toArray();
print("Problem 4 Output:");
printjson(problem4);
db.problemResults.insertOne({ problem: 4, output: problem4 });
