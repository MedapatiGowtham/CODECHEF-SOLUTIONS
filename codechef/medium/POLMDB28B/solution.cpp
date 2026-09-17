db = connect('mongodb://localhost:27017/streaming_db');

db.members.updateOne(
    { name: "Sophia" }, 
    { 
        $set: { 
            plan: "Premium", 
            isActive: true 
        } 
    }
);

db.members.deleteOne({ email: "test@example.com" });

const updatedSophia = db.members.findOne({ name: "Sophia" });
const testAccount = db.members.findOne({ email: "test@example.com" });

print("--- Sophia's Updated Profile ---");
printjson(updatedSophia);

print("--- Test Account Existence Check ---");
print("Is test account still there? " + (testAccount !== null));