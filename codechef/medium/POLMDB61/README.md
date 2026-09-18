# POLMDB61

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - Comment Tracker
- We have a users collection and a comments collection. Each comment contains a userId field that identifies who wrote it.
- Your goal is to generate a report that lists each user and includes an array of every comment they've ever made.

 **Inside the aggregate() pipeline:** 

- Use a $lookup stage
- Join from the comments collection
- Match: users _id with comments userId
- Store the result in my_comments

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T06:31:32.976Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB61)