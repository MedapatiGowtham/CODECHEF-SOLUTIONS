const http = require('http');
const fs = require('fs');
const path = require('path');

const server = http.createServer((req, res) => {
  if (req.url === '/') {
      res.writeHead(200, { 'Content-Type': 'text/plain' });
          res.end('Welcome to the server!');
            } else if (req.url === '/message') {
                const filePath = path.join(__dirname, 'message.txt');

                    fs.readFile(filePath, 'utf8', (err, data) => {
                          if (err) {
                                  if (err.code === 'ENOENT') {
                                            // File does not exist
                                                      res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                                res.end('Message file not found. Please create the file message.txt.');
                                                                        } else {
                                                                                  // Some other error
                                                                                            res.writeHead(500, { 'Content-Type': 'text/plain' });
                                                                                                      res.end('500 Internal Server Error');
                                                                                                              }
                                                                                                                    } else {
                                                                                                                            res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                                                                                                    res.end(data);
                                                                                                                                          }
                                                                                                                                              });
                                                                                                                                                } else {
                                                                                                                                                    res.writeHead(404, { 'Content-Type': 'text/plain' });
                                                                                                                                                        res.end('Not Found');
                                                                                                                                                          }
                                                                                                                                                          });

                                                                                                                                                          const port = 3000;
                                                                                                                                                          server.listen(port, () => {
                                                                                                                                                            console.log(`Server listening on port ${port}`);
                                                                                                                                                            });
