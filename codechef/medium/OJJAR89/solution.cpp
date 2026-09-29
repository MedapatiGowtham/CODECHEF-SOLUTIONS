  // Update the function to update the name in the user state
 // Update the function to update the name in the user state

  const [ageInput, setAgeInput] = useState("");
  const [cityInput, setCityInput] = useState("");
  const [nameInput, setNameInput] = useState("");
  // Separate state variables for managing input fields

  });
    address: { city: "Delhi", country: "India" } 
    age: 25, 
    name: "Alice", 
  const [user, setUser] = useState({ 
  // User state holding name, age, and address properties
   const updateName = () => {
       // Update only the name while keeping other properties unchanged
           if (nameInput.trim() !== "") {
                 setUser({ ...user, name: nameInput });
                     }
                         // Clear the input field after updating
                             setNameInput("");
                               };

                                 // Update the function to update the age in the user state
                                   const updateAge = () => {
                                       // Convert input to a number
                                           const newAge = Number(ageInput);
                                               
                                                   // Make sure the input is a valid number and not empty
                                                       if (!isNaN(newAge) && ageInput.trim() !== "") {
                                                             // Update only the age while keeping other properties unchanged
                                                                   setUser({ ...user, age: newAge });
                                                                       }
                                                                           // Clear the input field after updating
                                                                               setAgeInput("");
                                                                                 };

                                                                                   // Update the function to update the city in the user.address state
                                                                                     const updateCity = () => {
                                                                                         // Update only the city while keeping the country unchanged
                                                                                             if (cityInput.trim() !== "") {
                                                                                                   setUser({
                                                                                                           ...user,
                                                                                                                   address: {
                                                                                                                             ...user.address, // Spread the nested object
                                                                                                                                       city: cityInput
                                                                                                                                               }
                                                                                                                                                     });
                                                                                                                                                         }
                                                                                                                                                             // Clear the input field after updating
                                                                                                                                                                 setCityInput("");
                                                                                                                                                                   };

  return (
    <div className="profile-container">
      <h2>User Profile</h2>
      <p><strong>Name:</strong> {user.name}</p>