                                      const { description, completed } = req.body;
                                          const newTodo = new Todo({ description, completed });
                                              const savedTodo = await newTodo.save();
                                                  res.status(201).json(savedTodo);
                                                    } catch (error) {
                                                        res.status(400).json({ error: error.message });
                                                          }
                                                          });

                                                          // GET /todos: Find all the todos
                                                          app.get('/todos', async (req, res) => {
                                                            try {
                                                                const todos = await Todo.find({});
                                                                    res.json(todos);
                                                                      } catch (error) {
                                                                          res.status(500).json({ error: error.message });
                                                                            }
                                                                            });

                                                                            // PUT /todos/:id: Find and update the todo with the particular id
                                                                            app.put('/todos/:id', async (req, res) => {
                                                                              try {
                                                                                  const updatedTodo = await Todo.findByIdAndUpdate(
                                                                                        req.params.id,
                                                                                              req.body,
                                                                                                    { new: true, runValidators: true }
                                                                                                        );
                                                                                                            if (!updatedTodo) {
                                                                                                                  return res.status(404).json({ error: 'Todo not found' });
                                                                                                                      }
                                                                                                                          res.json(updatedTodo);
                                                                                                                            } catch (err) {
                                                                                                                                res.status(400).json({ error: err.message });
                                                                                                                                  }
                                                                                                                                  });

                                                                                                                                  // DELETE /todos/:id: Delete the todo with the given id
                                                                                                                                  app.delete('/todos/:id', async (req, res) => {
                                                                                                                                    try {
                                                                                                                                        const deletedTodo = await Todo.findByIdAndDelete(req.params.id);
                                                                                                                                            if (!deletedTodo) {
                                                                                                                                                  return res.status(404).json({ error: 'Todo not found' });
                                                                                                                                                      }
                                                                                                                                                          res.json({ message: 'Todo deleted successfully' });