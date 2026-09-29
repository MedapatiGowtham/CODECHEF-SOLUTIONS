# OJJAR98

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Rules of Hooks
#### Task: Fix the Hook Usage

In our IDE you are given a component that violates the Rules of Hooks. Identify the mistake and correct the code.

Once done, submit your solution to verify correctness.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T06:26:16.184Z  

```cpp
import { useState, useId } from "react";
import "./App.css";

// eslint-disable-next-line react/prop-types
function SimpleForm({ name: initialName, email: initialEmail }) {
  // 1. Set the initial state directly using the props, removing the if statements
    const [name, setName] = useState(initialName !== undefined ? initialName : "");
      const [email, setEmail] = useState(initialEmail !== undefined ? initialEmail : "");

        // 2. Move useId to the top level of the component (outside of any if block)
          const uniqueId = useId();

            function handleSubmit(event) {
                event.preventDefault();
                    console.log("Submitted:", { name, email });
                        setName(""); // Clear the input fields
                            setEmail("");
                              }

                                return (
                                    <form className="simple-form" onSubmit={handleSubmit}>
                                          <label htmlFor={`${uniqueId}-name`}>Name:</label>
                                                <input
                                                        type="text"
                                                                id={`${uniqueId}-name`}
                                                                        className="input-field"
                                                                                value={name}
                                                                                        onChange={(e) => setName(e.target.value)}
                                                                                              />

                                                                                                    <label htmlFor={`${uniqueId}-email`}>Email:</label>
                                                                                                          <input
                                                                                                                  type="email"
                                                                                                                          id={`${uniqueId}-email`}
                                                                                                                                  className="input-field"
                                                                                                                                          value={email}
                                                                                                                                                  onChange={(e) => setEmail(e.target.value)}
                                                                                                                                                        />

                                                                                                                                                              <button type="submit" className="submit-button">Submit</button>
                                                                                                                                                                  </form>
                                                                                                                                                                    );
                                                                                                                                                                    }

                                                                                                                                                                    function App() {
                                                                                                                                                                      return <SimpleForm name="Codechef" email="codechef@gmail.com" />;
                                                                                                                                                                      }

                                                                                                                                                                      export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR98)