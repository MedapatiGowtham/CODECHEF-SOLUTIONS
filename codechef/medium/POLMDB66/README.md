# POLMDB66

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Blog Posts and Comments Modeling

Imagine you are building a simple blogging application using Node.js and MongoDB with Mongoose. In this application, users can create blog posts, and other users can write comments on these posts. A single blog post can have many comments (from zero to potentially hundreds or thousands).

### Your Task:

 **Define Mongoose Schemas** :

- Create a Post schema that includes basic fields like title, content, author,'createdAt' and a way to associate it with comments.
- Create a Comment schema that includes basic fields like text, author,'createdAt' and a way to associate it with the post it belongs to.
- Be sure to reflect your chosen approach (embedding or referencing) accurately when modeling the relationship.
#### Expected Output:

 **Post** 

 **Comments** 

You can check that the post's id is refrenced in comment's schema.

🧠  *Hint:*  Think about how you might handle thousands of comments, how you'd query individual comments, and what kind of schema relationships Mongoose supports.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T20:17:59.169Z  

```cpp
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

```

---

[View on CodeChef](https://www.codechef.com/problems/POLMDB66)