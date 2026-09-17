  {
    $inc: { copies: -1 },
    $set: { is_available: false }
  }
);

// Verify update
const updatedBook = db.books.findOne({
  title: "Atomic Habits"
});

print("Book after borrowing:");
printjson(updatedBook);


// --- STEP 4: DELETE ---
db.books.deleteOne({
  title: "Atomic Habits"
});

const count = db.books.countDocuments();
const allBooks = db.books.find().toArray();

print("Total documents in 'books' collection: " + count);
printjson(allBooks);