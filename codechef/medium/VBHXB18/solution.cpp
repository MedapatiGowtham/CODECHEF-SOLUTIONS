      }, 1000); // Simulate grinding for 1 second
    });
  }
  
  function brewCoffee() {
    return new Promise(resolve => {
      setTimeout(() => {
        resolve("Coffee brewed!");
      }, 2000); // Simulate brewing for 2 seconds
    });
  }
  
  function pourCoffee() {
    return new Promise(resolve => {
      setTimeout(() => {
        resolve("Coffee poured!");
      }, 500); // Simulate pouring for 0.5 seconds
    });
  }
  
  async function placeOrder() {
    try {
      const grindResult = await grindCoffeeBeans();
      console.log(grindResult);
  
      // complete the code here:
      
  
      return "☕ Your coffee is ready!";
    } catch (error) {
      return "Something went wrong while making your coffee.";
    }
      const brewResult = await brewCoffee();
            console.log(brewResult);
              
                    const pourResult = await pourCoffee();
                          console.log(pourResult);
  }
  
  placeOrder().then(result => console.log(result));
  
        resolve("Coffee beans ground!");
function grindCoffeeBeans() {
    return new Promise(resolve => {
      setTimeout(() => {