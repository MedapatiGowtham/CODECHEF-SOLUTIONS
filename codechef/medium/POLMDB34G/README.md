# POLMDB34G

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Advanced Book Querying

Perform queries on the  **books**  collection using specific MongoDB operators and display the results.

 **Step 1: Query – High Availability Books ($gt)** 

- Use db.books.find() to retrieve books. Find all books where copies is greater than 4

 **Step 2: Filter – Multiple Genres ($in)** 

- Find books where genre is either: "Self-help" OR "Programming" Use $in operator with an array of values

 **Step 3: Search – Pattern Matching ($regex)** 

- Find books where the title starts with "The"
- Use $regex with pattern: "^The"

 **Step 4: Project – Limit Fields (Projection)** 

- Display only: title author Exclude _id field

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T09:17:15.503Z  

```cpp
print("GT Query Result:");
printjson(
  db.books.find({ copies: { $gt: 4 } }).toArray()
);


// --- STEP 2: FILTER ($in) ---
print("IN Filter Result:");
printjson(
  db.books.find({ genre: { $in: ["Self-help", "Programming"] } }).toArray()
);


// --- STEP 3: SEARCH ($regex) ---
print("Regex Search Result:");
printjson(
// --- STEP 1: QUERY ($gt) ---


]);
  { title: "The Pragmatic Programmer", author: "Andrew Hunt", copies: 6, genre: "Programming" }
  { title: "Deep Work", author: "Cal Newport", copies: 3, genre: "Self-help" },

db.books.deleteMany({});

db.books.insertMany([
  { title: "Atomic Habits", author: "James Clear", copies: 5, genre: "Self-help" },
  { title: "The Alchemist", author: "Paulo Coelho", copies: 2, genre: "Fiction" },
  { title: "Clean Code", author: "Robert C. Martin", copies: 8, genre: "Programming" },
  db.books.find({ title: { $regex: "^The" } }).toArray()
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB34G)