                                                                                                                                                                              }
                                                                                                                                                                              return <Temperature />;
                                                                                                                                                                            export default function App() {

                                                                                                                                                                            }
                                                                                                                                                                            );
                                                                                                                                                                          </div>
                                                                                                                                                                      </div>

                                                                                                                    <button onClick={() => setTemperature(temperature - 1)}>
                                                                                                                              Decrease
                                                                                                                                      </button>

                                                                                                                                              <button onClick={convertTemperature}>
                                                                                                                                                        Convert to {unit === "C" ? "Fahrenheit" : "Celsius"}
                                                                                                                                                                </button>
                                                                                                            </button>
                                                                                                    Increase
                                                                                          <button onClick={() => setTemperature(temperature + 1)}>
                                                                                  <div className={styles.controls}>
                                                                            </div>

                                                                      {temperature.toFixed(2)}°{unit}
                                                        <h1>Temperature Converter</h1>

                                                              <div className={styles.display}>

                                              return (
                                                  <div className={styles.wrapper}>
                          } else {
                                setTemperature((temperature - 32) * (5 / 9));
                                      setUnit("C");
                                          }
                                            };
          if (unit === "C") {
                setTemperature((temperature * 9) / 5 + 32);
                      setUnit("F");
import { useState } from "react";
import styles from "./App.module.css";

export function Temperature({ defaultTemperature = 0 }) {
  const [temperature, setTemperature] = useState(defaultTemperature);
    const [unit, setUnit] = useState("C");

      const convertTemperature = () => {