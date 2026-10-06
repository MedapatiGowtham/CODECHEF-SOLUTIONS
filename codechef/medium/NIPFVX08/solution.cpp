const express = require('express');
const mongoose = require('mongoose');

// Initialize Express app
const app = express();
const port = 3000;

// Use Atlas connection string (use your own string to connect to the database)
const mongoURI = "mongodb+srv://gowtham:gowtham123@cluster0.a8ucqj7.mongodb.net/skillbridge?appName=Cluster0";

// Connect to MongoDB Atlas
mongoose.connect(mongoURI)
  .then(() => {
    console.log('✅ Connected to MongoDB Atlas');
  })
  .catch((err) => {
    console.error('❌ MongoDB connection error:', err);
  });

// Basic route
app.get('/', (req, res) => {
  res.send('Hello from MyTasks App connected to MongoDB Atlas!');
});

// Start server
app.listen(port, () => {
  console.log(`🚀 Server is running at http://localhost:${port}`);
});
