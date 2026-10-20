                                                                        content: {
                                                                            type: String,
                                                                                required: true
                                                                                  },
                                                                                    author: {
                                                                                        type: String,
                                                                                            required: true
                                                          }
                                                          });

                                                          // Post Schema
                                                          const postSchema = new mongoose.Schema({
                                                            title: {
                                                                type: String,
                                                                    required: true
                                                                      },
                        type: String,
                            required: true
                              },
                                post: {
                                    type: mongoose.Schema.Types.ObjectId,
                                        ref: 'Post',
                                            required: true
                                              },
                                                createdAt: {
                                                    type: Date,
                                                        default: Date.now
      const commentSchema = new mongoose.Schema({
        text: {
            type: String,
                required: true
                  },
                    author: {
  mongoose.connect(uri)
    .then(() => console.log('✅ Connected to MongoDB Atlas'))
      .catch(err => console.error('❌ MongoDB connection error:', err));

      // Comment Schema

  // Connect to MongoDB Atlas
  'mongodb+srv://gowtham:gowtham123@cluster0.a8ucqj7.mongodb.net/skillbridge?appName=Cluster0';
// MongoDB Atlas Connection String
const uri = process.env.MONGODB_URI ||
const mongoose = require('mongoose');
