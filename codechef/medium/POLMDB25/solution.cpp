db = connect('mongodb://localhost:27017/club_db');

db.members.insertOne({
    name: "Ishaan Sharma",
    email: "ishaan@codechef.com",
    role: "Fullstack Developer",
    joinedYear: 2024
});

const verifiedMember = db.members.findOne({ email: "ishaan@codechef.com" });

if (verifiedMember) {
    print("Verification Successful! Member found:");
    printjson(verifiedMember);
} else {
    print("Verification Failed: Member not found.");
}