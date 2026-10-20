const express = require('express');
const path = require('path');
const fs = require('fs');
const app = express();
const PORT = process.env.PORT || 3000;

app.use(express.urlencoded({ extended: true }));

// Middleware to handle the public folder to serve css in static format
app.use(express.static(path.join(__dirname, 'public')));

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Routes to set / route to server index file
app.get('/', (req, res) => {
    res.render('index');
    });

    // Create 'notes' folder if it doesn't exist
    if (!fs.existsSync('./notes')) {
        fs.mkdirSync('./notes');
        }

        app.listen(PORT, () => {
            console.log(`Server running at http://localhost:${PORT}`);
            });