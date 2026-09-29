                                                                                                                                                                                                                                                        style={{ marginLeft: "10px" }}
                                                                                                                                                                                                                                                                />
                                                                                                                                                                                                                                                                        <label> Red</label>
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                        <p>You have selected the color <strong>{color}</strong>.</p>
                                                                                                                                                                                                                                                                                              </div>

                                                                                                                                                                                                                                                                                                    <hr />

                                                                                                                                                                                                                                                                                                          {/* 3. Checkboxes */}
                                                                                                                                                                                                                                                                                                                <h3>3. Checkbox</h3>
                                                                                                                                                                                                                                                                                                                      <div>
                                                                                                                                                                                                                                                                                                                              <input 
                                                                                                                                                                                                                                                                                                                                        type="checkbox" 
                                                                                                                                        value="blue" 
                                                                                                                                                  checked={color === 'blue'} 
                                                                                                                                                            onChange={(e) => setColor(e.target.value)} 
                                                                                                                                                                    />
                                                                                                                                                                            <label> Blue</label>
                                                                                                                                                                                    
                                                                                                                                                                                            <input 
                                                                                                                                                                                                      type="radio" 
                                                                                                                                                                                                                name="color" 
                                                                                                                                                                                                                          value="red" 
                                                                                                                                                                                                                                    checked={color === 'red'} 
                                                                                                                                                                                                                                              onChange={(e) => setColor(e.target.value)} 

                                                                                <hr />

                                                                                      {/* 2. Radio Buttons */}
                                                                                            <h3>2. Radio Buttons</h3>
                                                                                                  <div>
                                                                                                          <input 
                                                                                                                    type="radio" 
                                                                                                                              name="color" 
                                                                          <p>You have selected: <strong>{fruit}</strong>.</p>
                                                                    </select>
                                                              <option value="banana">Banana</option>
                                                      <option value="apple">Apple</option>
                                              <select value={fruit} onChange={(e) => setFruit(e.target.value)}>
                                        <h3>1. Select Dropdown</h3>
  // State for 1. Select Dropdown
    const [fruit, setFruit] = useState('banana');
      
        // State for 2. Radio Buttons
          const [color, setColor] = useState('blue');
            
              // State for 3. Checkbox
                const [subscribed, setSubscribed] = useState(false);

                  return (
                      <div style={{ padding: "20px", fontFamily: "sans-serif" }}>
                            
                                  {/* 1. The Select Dropdown */}
import React, { useState } from "react";

export default function App() {