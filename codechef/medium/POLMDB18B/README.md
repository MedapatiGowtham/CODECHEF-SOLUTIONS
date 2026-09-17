# POLMDB18B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Social Guestbook

Create a collection named  **guestbook**  and perform the  **full lifecycle**  of a user's comment: from posting it to editing a typo, and finally removing it.

 **Step 1:**  Create the Post (C)
Use `db.guestbook.insertOne()` to add a new message.

- Fields to include: username, message, and likes (Number).

 **Step 2:**  Read the Post (R)
Use `db.guestbook.findOne()` to verify the post exists.

- Target: Search for the post by the username.

 **Step 3:**  Update the Post (U)
Use `db.guestbook.updateOne()` to add a  **"Like"**  to the post.

- Operation: Find the post by username and use $inc (increment) to increase the likes by 1.

 **Step 4:**  Delete the Post (D)
Use `db.guestbook.deleteOne()` to  **remove**  the post.

- Target: Remove the post where the username matches.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T09:05:51.472Z  

```cpp
db = connect('mongodb://localhost:27017/guestbook_db');

// --- STEP 1: CREATE ---
db.guestbook.insertOne({
  username: "john_doe",
  message: "Hello! This is my first guestbook post.",
  likes: 0
});

// --- STEP 2: READ ---
const post = db.guestbook.findOne({ username: "john_doe" });
print("Post after creation:");
printjson(post);

// --- STEP 3: UPDATE ---
db.guestbook.updateOne(
  { username: "john_doe" },
  { $inc: { likes: 1 } }
);

// Verify update
const updatedPost = db.guestbook.findOne({ username: "john_doe" });
print("Post after update:");
printjson(updatedPost);

// --- STEP 4: DELETE ---
db.guestbook.deleteOne({ username: "john_doe" });

// -----------------------------
const count = db.guestbook.countDocuments();
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB18B)