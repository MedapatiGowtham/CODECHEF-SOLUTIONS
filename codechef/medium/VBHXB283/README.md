# VBHXB283

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Redis- Practice Problem

In this exercise, you will integrate  **Redis**  with an Express.js application to persist and retrieve key–value pairs. This helps you understand how to use Redis as a simple in-memory database.

 **Problem Statement** 

Build an Express server with the following requirements:

- POST /store Accepts a JSON body containing { "key": "someKey", "value": "someValue" }. Stores the key–value pair in Redis. Responds with: Stored key: <key> with value: <value>
- GET /retrieve/:key Looks up the value for the given key in Redis. If the key exists, respond with: Retrieved: <value> If the key does not exist, respond with: Key not found

 **Example Usage**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T05:31:34.930Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB283)