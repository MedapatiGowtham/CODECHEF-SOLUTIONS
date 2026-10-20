                                              name: 'Jane Writer',
                                                    bio: 'Loves to write about Node.js and Mongoose.'
                                                        });

                                                            const savedAuthor = await author.save();

                                                                console.log('✅ Author created:', savedAuthor.name);
                                        const author = new Author({

    // Step 2: Define the Author Schema
    const authorSchema = new mongoose.Schema({
      name: String,
        bio: String
        });

        // Step 3: Define the BlogPost Schema
        const blogPostSchema = new mongoose.Schema({
          title: String,
            content: String,
              author: {
                  type: mongoose.Schema.Types.ObjectId,
                      ref: 'Author'
                        }
                        });

                        // Create Models
                        const Author = mongoose.model('Author', authorSchema);
                        const BlogPost = mongoose.model('BlogPost', blogPostSchema);

                        // Step 4: Create sample data
                        async function createSampleData() {
                          console.log('\n--- Creating Sample Author and BlogPost ---');

                            try {
                                await Author.deleteMany({});
                                    await BlogPost.deleteMany({});

    .catch(err => console.error('❌ MongoDB connection error:', err));

mongoose.connect(uri)
  .then(() => console.log('✅ Connected to MongoDB Atlas'))
const mongoose = require('mongoose');

// Step 1: Connect to MongoDB Atlas
const uri = 'mongodb+srv://gowtham:gowtham123@cluster0.a8ucqj7.mongodb.net/skillbridge?appName=Cluster0';