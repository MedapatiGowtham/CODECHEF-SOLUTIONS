

print("Step 1: Nested Query Result");
    items: [
      { name: "Burger", price: 150, quantity: 1 },
      { name: "Pizza", price: 300, quantity: 2 }
    ]
  }
]);
      { name: "Coke", price: 50, quantity: 3 }
    ]
  },
  {
    customer: "Vikram",
db = connect('mongodb://localhost:27017/food_delivery');

db.orders.deleteMany({});

db.orders.insertMany([
  {
    customer: "Rahul",
    items: [
      { name: "Burger", price: 150, quantity: 2 },
      { name: "Fries", price: 80, quantity: 1 }
    ]
  },
  {
    customer: "Anjali",
    items: [
      { name: "Pizza", price: 300, quantity: 1 },