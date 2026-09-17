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