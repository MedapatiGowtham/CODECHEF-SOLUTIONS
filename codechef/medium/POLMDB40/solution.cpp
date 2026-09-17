db = connect('mongodb://localhost:27017/projects_db');

db.roster.insertOne({
    projectName: "Alpha-Build",
    team: ["Rahul"],
    status: "In Progress"
});

// STEP 1: Add Arjun
db.roster.updateOne(
    { projectName: "Alpha-Build" },
    { $push: { team: "Arjun" } }
);

// STEP 2: Add Sita
db.roster.updateOne(
    { projectName: "Alpha-Build" },
    { $push: { team: "Sita" } }
);

// STEP 3: Remove Arjun
db.roster.updateOne(
    { projectName: "Alpha-Build" },
    { $pull: { team: "Arjun" } }
);

const finalProject = db.roster.findOne({ projectName: "Alpha-Build" });
print("--- Final Team Roster ---");
printjson(finalProject.team);