      const success = Math.random() > 0.5;
      if (success) {
        callback(null, { id: 123, name: "John Doe" });
      } else {
        callback("Failed to fetch user data.", null);
      }
    }, 50);
        console.error("Promise → Error fetching user data:", error);
      });
  }
  
  // Callback-based simulation
  function fetchUserDataCallback(callback) {
    setTimeout(() => {
      .catch(error => {
      })
        console.log("Promise → User data:", userData);
      .then(userData => {
    fetchUserData()
  function getUserDataPromise() {
  // Promise .then/.catch version
  
    }
  }
      console.error("Async/Await → Error fetching user data:", error);
  
  // Async/Await version
  async function getUserDataAsyncAwait() {
    try {
      const userData = await fetchUserData();
      console.log("Async/Await → User data:", userData);
    } catch (error) {
      }, 50);
    });
  }
        }
          reject("Failed to fetch user data.");
        } else {
          resolve({ id: 123, name: "John Doe" });
        const success = Math.random() > 0.5;
        if (success) {
      setTimeout(() => {
// Simulated API function
async function fetchUserData() {
    return new Promise((resolve, reject) => {