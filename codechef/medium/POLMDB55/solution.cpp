
db.logs.drop(); 
const entries = [];
for (let i = 1; i <= 3000; i++) {
    entries.push({
        logId: "LOG_" + i,
        status: i % 10 === 0 ? "error" : "success"
    });
}
db.logs.insertMany(entries);

const beforeStats = db.logs.find({ logId: "LOG_1500" }).explain("executionStats");

print("--- Before Optimization ---");
print("Strategy: " + beforeStats.queryPlanner.winningPlan.stage);
print("Docs Examined: " + beforeStats.executionStats.totalDocsExamined);

db.logs.createIndex({ logId: 1 });

const afterStats = db.logs.find({ logId: "LOG_1500" }).explain("executionStats");

print("\n--- After Optimization ---");
print("Strategy: " + afterStats.queryPlanner.winningPlan.stage);
print("Docs Examined: " + afterStats.executionStats.totalDocsExamined);
