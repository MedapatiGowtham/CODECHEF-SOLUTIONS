# OJJAR231

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Switch the theme

In this challenge, you will build a  **Theme Switcher**  using React's  **Context API**. The application should allow users to toggle between  **Light**  and  **Dark**  modes. Some of the boilerplate code is already provided, but you will need to  **complete the missing pieces**  inside the `ThemeContext.js` and `Header.js` files.

 **Files Overview** 

- App.js – Already implemented. Wraps the app with the ThemeProvider.
- ThemeContext.js – Partially implemented. You need to complete the context logic to toggle themes.
- Header.js – Partially implemented. You need to consume the theme context and use it to render styles and the toggle button.

 **Your Tasks** 

- Your job is to complete the theme switching functionality by editing the following files:
- ThemeContext.js Create a ThemeProvider component: Use useState to manage the theme (light or dark). Define a toggleTheme function that switches between the two. Provide theme and toggleTheme via the context. Create and export a custom hook useTheme() to consume the context safely.
- Header.js Use the useTheme() hook to access the current theme and toggleTheme function. Add a button that calls toggleTheme() on click. Use inline styles or classNames to apply theme-specific colors: Light mode: background #eee, text #000 Dark mode: background #333, text #fff Button should dynamically display: "Switch to Dark Mode" if current theme is light "Switch to Light Mode" if current theme is dark

 **Final Result** 

 **Helpful Resources** 

- Codechef React course
- React Docs – Context
- React Docs – useContext Hook

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T07:16:33.175Z  

```cpp
import { createContext, useState, useContext } from "react";

// 1. Create the context
const ThemeContext = createContext();

// 2. Create the provider component
export function ThemeProvider({ children }) {
  const [theme, setTheme] = useState("light");

    const toggleTheme = () => {
        setTheme((prev) => (prev === "light" ? "dark" : "light"));
          };

            return (
                <ThemeContext.Provider value={{ theme, toggleTheme }}>
                      {children}
                          </ThemeContext.Provider>
                            );
                            }

                            // 3. Create a custom hook for easy access
                            export function useTheme() {
                              const context = useContext(ThemeContext);
                                if (!context) {
                                    throw new Error("useTheme must be used within a ThemeProvider");
                                      }
                                        return context;
                                        }

```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR231)