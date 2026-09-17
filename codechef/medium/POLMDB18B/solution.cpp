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