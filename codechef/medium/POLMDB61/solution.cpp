  { text: "Great post!", userId: "u101" },
  { text: "I disagree with point 2.", userId: "u102" },
  { text: "Thanks for sharing!", userId: "u101" }
]);

const report = db.users.aggregate([
  {
    $lookup: {
      from: "comments",
      localField: "_id",
      foreignField: "userId",
      as: "my_comments"
    }
  }
  
]).toArray();


print("--- Final Social Report ---");
if (report.length > 0 && report[0].my_comments) {
    printjson(report);
    print("\nSuccess! You linked " + report[0].my_comments.length + " comments to " + report[0].username);
} else {
    print("The 'my_comments' array is missing. Check your $lookup syntax!");
}