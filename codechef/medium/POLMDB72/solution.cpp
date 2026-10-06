                                    // --- PART B ---
                                    // A new review with rating = 5 arrives.
                                    // Recalculated values: avgRating = 4.25, reviewCount = 4
                                    db.products.updateOne(
                                        { _id: 1 },
                                            {
                                                    $set: {
                                                                avgRating: 4.25,
                                                                            reviewCount: 4
                                                                                    }
                                                                                        }
                                                                                        );

                                                                                        const optimizedProduct = db.products.findOne({ _id: 1 });
                                                                                        print("--- Optimized Product Document ---");
                                                                                        printjson(optimizedProduct);

                                                                                        if (optimizedProduct.avgRating === 4.25 && optimizedProduct.reviewCount === 4) {
                                                                                            print("\nSuccess! Product rating optimized for fast reads.");
                                                                                            } else {
                                                                                                print("Something is missing — check your denormalized fields!");
                                                                                                }