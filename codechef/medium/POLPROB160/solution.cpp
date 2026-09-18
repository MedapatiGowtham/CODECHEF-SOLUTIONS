  ]);
  
  // Aggregation pipeline using $project
  const result = db.employees.aggregate([
    {
      $project: {
        name: 1,          // Include the 'name' field
        salary: 1,        // Include the 'salary' field
        
        // Compute a new field "senior" (true if age >= 30, false otherwise)
        senior: { $gte: ["$age", 30] },
        
        // Exclude the _id field from output
        _id: 0
      }
    }
  ]).toArray();
  
  // Print the result
  printjson(result);
  db.results.insertMany(result);


  
