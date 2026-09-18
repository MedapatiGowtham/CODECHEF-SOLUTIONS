  {
    $project: {
      customer: 1,
      product: 1,
      price: "$amount",
      _id: 0
    }
  }
]).forEach(doc => printjson(doc));


print("Step 3: Group Result");

// Group by customer and calculate totals
db.sales.aggregate([
  {
    $group: {
      _id: "$customer",
      totalAmount: { $sum: "$amount" },
      totalQuantity: { $sum: "$quantity" }
    }
  }
]).forEach(doc => printjson(doc));

