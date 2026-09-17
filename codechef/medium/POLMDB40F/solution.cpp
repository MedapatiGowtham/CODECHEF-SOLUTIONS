

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
