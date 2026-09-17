# POLMDB40F

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Smart Library Record Updates

Manage and update the  **books**  collection using:

- Field updates ($set, $unset)
- Array operations ($push, $pull)
- Advanced updates ($inc, $addToSet)

 **Step 1: Update Fields ($set)** 

- Update the genre of "Atomic Habits" to "Productivity"
- Add a new field rating with value 4.8

 **Step 2: Remove Field ($unset)** 

- Remove the rating field from "Atomic Habits"

 **Step 3: Array Add ($push)** 

- Add a new review "Excellent book!" to "Clean Code"

 **Step 4: Array Remove ($pull)** 

- Remove the review "Inspirational" from "The Alchemist"

 **Step 5: Increment ($inc)** 

- Increase the copies of "Clean Code" by 2

 **Step 6: Unique Add ($addToSet)** 

- Add "Alice" to borrowers of "Clean Code"
- Ensure no duplicate entries are added

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T09:46:57.419Z  

```cpp


// --- STEP 4: ARRAY REMOVE ($pull) ---
print("Step 4: After $pull");

db.books.updateOne(
  { genre: "Fiction" },
  {
    $pull: {
      reviews: "Inspirational"
    }
  }
);

db.books.find({}).forEach(doc => printjson(doc));


// --- STEP 5: INCREMENT ($inc) ---
print("Step 5: After $inc");

db.books.updateOne(
  { author: "Robert C. Martin" },
  {
    $inc: {
      copies: 2
    }
  }
);

db.books.find({}).forEach(doc => printjson(doc));

```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB40F)