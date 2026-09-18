# POLMDB46B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Restaurant Order Analytics System

Work with the  **orders**  collection to query nested arrays using:

- $elemMatch
- Nested field queries
- $regex inside arrays

 **Step 1: Nested Query – Basic Array Field** 

- Find orders where any item has price = 300
- Query directly using nested field: items.price

 **Step 2: ElemMatch – Multiple Conditions** 

- Find orders where a single item: name is "Burger" AND quantity ≥ 2
- Use $elemMatch

 **Step 3: Search – Pattern Matching in Array** 

- Find orders where any item name contains "Piz"
- Use $regex on items.name

 **Step 4: Combined Condition** 

- Find orders where: Any item has price > 100 AND customer name is "Rahul"

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T06:19:18.142Z  

```cpp


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
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB46B)