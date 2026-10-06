      product_id: 1,
          name: incomingBook.name,
              price: incomingBook.price,
                  description: incomingBook.description
};
const sqlBookDetails = {
      product_id: 1,
          author: incomingBook.author,
              pages: incomingBook.pages
};

console.log("SQL Products Table Row:", sqlBookRecord);
console.log("SQL Books Details Table Row:", sqlBookDetails);


console.log("\n--- 2. NoSQL (Document) Approach Simulation ---");
// In a NoSQL document database like MongoDB, documents can be polymorphic 
// and store unique fields directly inside the document schema without normalization.
const mongoBookDocument = {
      _id: "book_001",
          type: "Book",
              name: incomingBook.name,
                  price: incomingBook.price,
                      description: incomingBook.description,
                          author: incomingBook.author,
                              pages: incomingBook.pages
};

const mongoTShirtDocument = {
      _id: "tshirt_002",
          type: "T-Shirt",
              name: incomingTShirt.name,
                  price: incomingTShirt.price,
                      description: incomingTShirt.description,
                          color: incomingTShirt.color,
                              size: incomingTShirt.size,
                                  material: incomingTShirt.material
};

console.log("MongoDB Book Document:", mongoBookDocument)
}
}
}
}
}