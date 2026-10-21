# OJJAR148

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Build React Travel Guide With Lazy Loading

You are building a Travel Guide app in React. The app has the following pages:

🏠 Home – Welcomes the user. 🌍 Destinations – Shows a list of travel destinations. 📖 About – Tells about the travel guide company. 📞 Contact – Shows contact info.

 **Tasks** 

- To optimize the app by implementing Lazy Loading for these pages(Complete App.jsx).
- Style the Heading - Apply the following styles to the # (Complete Home.jsx) Font size: 36px Font weight: bold Color: #2c3e50 Margin-bottom: 20px
- Style the Paragraph - Apply the following styles to the (Complete Home.jsx) Font size: 18px Color: #555
- Add a Background - Add a background color #f0f0f0 to the body(Complete Home.jsx).

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T06:54:26.521Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR148)