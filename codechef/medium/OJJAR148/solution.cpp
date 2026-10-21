import React, { lazy, Suspense } from "react";
import { Routes, Route, Link } from "react-router-dom";

const Home = lazy(() => import("./pages/Home"));
const Destinations = lazy(() => import("./pages/Destinations"));
const About = lazy(() => import("./pages/About"));
const Contact = lazy(() => import("./pages/Contact"));

function App() {
  return (
      <div>
            <nav>
                    <Link to="/">Home</Link> | <Link to="/destinations">Destinations</Link> | <Link to="/about">About</Link> | <Link to="/contact">Contact</Link>
                          </nav>
                                
                                      <Suspense fallback={<div>Loading...</div>}>
                                              <Routes>
                                                        <Route path="/" element={<Home />} />
                                                                  <Route path="/destinations" element={<Destinations />} />
                                                                            <Route path="/about" element={<About />} />
                                                                                      <Route path="/contact" element={<Contact />} />
                                                                                              </Routes>
                                                                                                    </Suspense>
                                                                                                        </div>
                                                                                                          );
                                                                                                          }

                                                                                                          export default App;