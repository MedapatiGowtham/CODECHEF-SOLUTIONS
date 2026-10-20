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
