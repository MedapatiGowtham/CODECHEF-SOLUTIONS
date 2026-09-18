    properties.push({
        address: i + " Tech Lane",
        type: type,
        amenities: shuffled.slice(0, amenityCount)
    });
}

db.listings.insertMany(properties);

const slowSearch = db.listings.find({
    type: "Apartment",
    amenities: "Solar"
}).explain("executionStats");

print("Documents scanned BEFORE index: " + slowSearch.executionStats.totalDocsExamined);

db.listings.createIndex({ type: 1, amenities: 1 });

const fastSearch = db.listings.find({
    type: "Apartment",
    amenities: "Solar"
}).explain("executionStats");

print("Documents scanned AFTER index: " + fastSearch.executionStats.totalDocsExamined);
