// app.js
const express = require('express');
const app = express();
const port = 3000;

// Middleware 1: Sets the response message
const messageMiddleware = (req, res, next) => {
  res.locals.message = 'hello world';
    next();
    };

    // Middleware 2: Converts the message to uppercase
    const uppercaseMiddleware = (req, res, next) => {
      if (res.locals.message) {
          res.locals.message = res.locals.message.toUpperCase();
            }
              next();
              };

              // Register middlewares in order
              app.use(messageMiddleware);
              app.use(uppercaseMiddleware);

              // Final route handler
              app.get('/', (req, res) => {
                res.send(res.locals.message);
                });

                app.listen(port, () => {
                  console.log(`Server running at http://localhost:${port}`);
                  });