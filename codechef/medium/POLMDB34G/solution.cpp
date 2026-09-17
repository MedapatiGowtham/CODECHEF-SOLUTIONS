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