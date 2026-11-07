const mongoose = require('mongoose');

// Replace with your actual MongoDB Atlas URI
const uri = "mongodb+srv://siritamma09_db_user:Siri2006@cluster0.16bb8ri.mongodb.net/?appName=Cluster0";

// Connect to MongoDB Atlas
mongoose.connect(uri, {
    useNewUrlParser: true,
        useUnifiedTopology: true,
        })
        .then(() => {
            console.log('Connected to MongoDB Atlas');

                // Define the product schema
                    const productSchema = new mongoose.Schema({
                            productName: String,
                                    price: Number,
                                            stockQuantity: Number,
                                                    category: String
                                                        });

                                                            // Create the Product model
                                                                const Product = mongoose.model('Product', productSchema);

                                                                    // Print verification messages
                                                                        console.log('Product Model Created Successfully!');
                                                                            console.log('Model Name:', Product.modelName);
                                                                                console.log('Schema Fields:', Object.keys(productSchema.paths));

                                                                                    // mongoose.connection.close();
                                                                                    })
                                                                                    .catch((err) => {
                                                                                        console.error('MongoDB Atlas connection error:', err);
                                                                                        });