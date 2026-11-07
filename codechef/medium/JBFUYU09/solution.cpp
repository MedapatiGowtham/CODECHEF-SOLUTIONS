                                                                  const savedBook = await newBook.save();
                                                                      res.status(201).json(savedBook);
                                                                        } catch (error) {
                                                                            res.status(400).json({ error: error.message });
                                                                              }
                                                                              });

                                                                              app.get("/books", async (req, res) => {
                                                                                try {
                                                                                    const books = await Book.find({});
                                                                                        res.json(books);
                                                                                          } catch (error) {
                                                                                              res.status(500).json({ error: error.message });
                                                                                                }
                                                                                                });

                                                                                                app.put("/books/:id", async (req, res) => {
                                                                                                  try {
                                                                                                      const { id } = req.params;
                                                                                                          const updatedBook = await Book.findByIdAndUpdate(id, req.body, {
                                                                                                                new: true,
                                                                                                                      runValidators: true,
                                                                                                                          });
                                                                                                                              if (!updatedBook) {
                                                                                                                                    return res.status(404).json({ message: "Book not found" });
                                                                                                                                        }
                                                                                                                                            res.json(updatedBook);
                                                                                                                                              } catch (error) {
                                                                                                                                                  res.status(400).json({ error: error.message });
                                                                                                                                                    }
                                                                                                                                                    });

                                                                                                                                                    app.delete("/books/:id", async (req, res) => {
                                                                                                                                                      try {
                                                                                                                                                          const { id } = req.params;
                                                                                                                                                              const deletedBook = await Book.findByIdAndDelete(id);
                                                                                                                                                                  if (!deletedBook) {
                                                                                                                                                                        return res.status(404).json({ message: "Book not found" });
                                                                                                                                                                            }
                                                                                                                                                                                res.json({
                                                                                                                                                                                      message: "Book deleted successfully",
                                                                                                                                                                                            deletedBook,
                                                                                                                                                                                                });
                                                                                                                                                                                                  } catch (error) {