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