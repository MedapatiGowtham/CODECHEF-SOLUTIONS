# VBHXB22

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate File Processing with Error Handling

Let's practice how to handle errors in using different functions:

### Task:
- Complete the code to handle errors using async/await.
- Complete the code to handle errors using.then()/.catch().
- Complete the code to handle errors using callback function and print the result or error in the given way:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T07:52:34.356Z  

```cpp
      if (success) {
      // write callback conditions to return the output
                callback(null, { city, temp: "30°C", condition: "Sunny" });
                      } else {
                              callback(`Error: Could not fetch weather for ${city}`, null);
                                    }



    }, 50);
  }
  
  function getWeatherCallback(city) {
    // complete the code to print the output or error from callback function call
fetchWeatherWithCallback(city, (err, data) => {
        if (err) {
                console.error("Callback Error:", err);
                      } else {
                              console.log("Callback:", data);
                                    }
                                        });


  }
  
  
  getWeatherAsync("Delhi");
  getWeatherPromise("Mumbai");
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB22)