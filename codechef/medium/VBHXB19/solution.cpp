function prepareBread() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Bread prepared!");
    }, 1000); // Simulate preparing bread for 1 second
  });
}

function addFilling() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Filling added!");
    }, 2000); // Simulate adding filling for 2 seconds
  });
}

function wrapSandwich() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Sandwich wrapped!");
    }, 500); // Simulate wrapping for 0.5 seconds
  });
}

async function prepareSandwich() {
  // Your code here
  const step1 = await prepareBread();
      console.log(step1); // Log: Bread prepared!
        
            const step2 = await addFilling();
                console.log(step2); // Log: Filling added!
                  
                      const step3 = await wrapSandwich();
                          console.log(step3); // Log: Sandwich wrapped!
                            
                                return "Sandwich is ready to eat!";
}

prepareSandwich().then(result => console.log(result));