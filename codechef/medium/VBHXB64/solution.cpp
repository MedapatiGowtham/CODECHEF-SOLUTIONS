// write your code here
const http = require('http');
const url = require('url');

const products = {
  '123': { name: 'Example Product', price: '\$25' },
    '456': { name: 'Another Product', price: '\$50' }
    };

    const server = http.createServer((req, res) => {
      const parsedUrl = url.parse(req.url, true);
        const path = parsedUrl.pathname;
          const id = parsedUrl.query.id;

            if (path === '/product') {
                if (id && products[id]) {
                      const product = products[id];
                            res.writeHead(200, { 'Content-Type': 'text/plain' });
                                  res.end(`Product ID: ${id}, Name: ${product.name}, Price: ${product.price}`);
                                      } else {
                                            res.writeHead(400, { 'Content-Type': 'text/plain' });
                                                  res.end('Error: Product ID is required');
                                                      }
                                                        } else {
                                                            res.writeHead(404, { 'Content-Type': 'text/plain' });
                                                                res.end('Not Found');
                                                                  }
                                                                  });

                                                                  server.listen(3000, () => {
                                                                    console.log('Product server is running on port 3000');
                                                                    });