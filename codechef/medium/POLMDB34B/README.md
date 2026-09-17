# POLMDB34B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Library Search Engine

You are building the search logic for a digital library. The librarian needs to find books using two different methods:

- Keyword Search: A general search that finds a word anywhere in the title.
- Category Filter: A strict search that identifies books by a specific suffix in their product code.

 **Task 1: The "Contains" Search** 
Find the word "mongo" anywhere in the title.

- Use { $regex: "mongo" } without any special symbols.
- Add $options: "i" so it ignores capital letters.

 **Task 2: The "Ends With" Filter** 
Check if the code finishes with "EDU".

- Use the $ symbol at the end of your text like this: "EDU$".
- This ensures you only find Educational editions.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T09:13:41.446Z  

```cpp
db = connect('mongodb://localhost:27017/library_db');

db.books.insertMany([
    { title: "Advanced MongoDB", code: "DB-X1-PRO" },
    { title: "Learning Javascript", code: "JS-L1-EDU" },
    { title: "MongoDB Basics", code: "DB-B1-EDU" },
    { title: "React for Beginners", code: "JS-R1-PRO" }
]);

const mongoBooks = db.books.find({ 
    title: { $regex: "mongo", $options: "i" } 
}).toArray();


const eduEditions = db.books.find({ 
    code: { $regex: "EDU$" } 
}).toArray();


print("--- Search Results for 'mongo' ---");
printjson(mongoBooks);

print("--- Educational Editions (Ending in EDU) ---");
printjson(eduEditions);
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB34B)