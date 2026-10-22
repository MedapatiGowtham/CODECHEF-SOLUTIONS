                                 */
                                 app.get("/retrieve/:key", (req, res) => {
                                   const { key } = req.params;

                                     redisClient.get(key, (err, reply) => {
                                         if (err) {
                                               return res.status(500).send("Error retrieving value");
                                                   }

                                                       if (reply === null || reply === undefined) {
                                                             return res.send("Key not found");
                                                                 }

                                                                     res.send(`Retrieved: ${reply}`);
                                                                       });
                                                                       });

                                                                       if (require.main === module) {
                                                                         app.listen(port, () => {
                                * TODO: Retrieve value from Redis by key
                               * GET /retrieve/:key
                              /**

                              });
                            res.send(`Stored key: ${key} with value: ${value}`);
                              });

                        }
                    return res.status(500).send("Error storing value");
              if (err) {
          redisClient.set(key, value, (err) => {