import { useState } from "react";
import "./App.css";

export default function App() {
  // 1. Declare a state variable 'value' with an initial value of an empty string
    const [value, setValue] = useState("");

      // Function to generate a random string and update the state
        const generateRandomString = () => {
            // 3. Generate a random string using Math.random and convert it to base 36
                const randomStr = Math.random().toString(36).substring(2, 8);
                    // Update the state variable 'value' with the random string
                        setValue(randomStr);
                          };

                            return (
                                <div className="container">
                                      <h2>useState Form Value Demo</h2>
                                            
                                                  {/* 2. Update the input field bound to the state variable 'value' */}
                                                        <input
                                                                type="text"
                                                                        value={value}
                                                                                onChange={(e) => setValue(e.target.value)}
                                                                                        placeholder="Type something..."
                                                                                                className="input-field"
                                                                                                      />
                                                                                                            
                                                                                                                  {/* 4. Display the live value from the state */}
                                                                                                                        <div className="output-box">
                                                                                                                                <p>Live Display: {value}</p>
                                                                                                                                      </div>
                                                                                                                                            
                                                                                                                                                  {/* 5. Update the Button to generate a random string */}
                                                                                                                                                        <button className="btn" onClick={generateRandomString}>
                                                                                                                                                                Generate Random String
                                                                                                                                                                      </button>
                                                                                                                                                                          </div>
                                                                                                                                                                            );
                                                                                                                                                                            }