# OJJAR89

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Complex State

 **Task: Implement State Update Functions in React** 

In this task, you'll practice updating state in React, including handling nested objects. Here's what you need to do:

- Complete the 3 update functions in the ProfileUpdater component: updateName: Update the user's name using the nameInput value updateAge: Update the user's age using the ageInput value updateCity: Update the city in the user's address using the cityInput value

 **Requirements:** 

- All updates should maintain immutability (create new objects)
- After updating, clear the corresponding input field
- For age: Convert input to a number and validate it's a number
- For name/city: Only update if input is not empty
- For city: Remember the address is a nested object!

 **Step-by-Step Guide:** 

- Update Name: Use the nameInput value to update user.name Use the spread operator (...) to copy previous state Reset nameInput to empty string after update
- Update Age: Convert ageInput to a number first Check if the conversion is valid (using isNaN()) Update user.age only if valid Reset ageInput after update
- Update City (Nested Object): Update the city property inside address Copy both the main user object AND the address object Use nested spread operators to maintain immutability Reset cityInput after update

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T05:58:11.611Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR89)