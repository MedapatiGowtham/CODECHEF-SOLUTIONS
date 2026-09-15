# OJJAR65

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Props in React

We have already created a greeting card in the last lesson! Now, we will use  **components and props**  to make the solution more efficient and reusable.

#### Your Task:
- Create a reusable component <GreetingCard /> that takes name, age, and greeting as props.
- Use instances of <GreetingCard /> inside the App component with values for name, age, and greeting.
- Make sure not change the messages.

 **Note - Make sure to take the** `styles` **and** `jsx` **from the App component.** 
Once you're done, submit your solution and check it's correct not.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T06:09:14.304Z  

```cpp
      border: "2px solid #333", 
  const cardStyle = {

  const greeting = "Happy Birthday!";  
  const age = 25; 
  const name = "John"; 
            <p>Year: {new Date().getFullYear()}</p>
            <p>Enjoy your day! 🎉</p>
        </div>   
    );
}
export function App() {  
      padding: "20px", 
      borderRadius: "10px", 
      width: "250px",
      textAlign: "center",
      boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
  }; 
  const headingStyle = {
      color: "blue",
      fontSize: "20px"
  };
  return (  
      <div style={cardStyle}>
          <h2 style={headingStyle}>{greeting}</h2>  

          <p>Hello, my name is {name}.</p>  
            <p>Hello, my name is {name}.</p>
            <h2 style={headingStyle}>{greeting}</h2>
        <div style={cardStyle}>
    return (
        boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
    };
    const headingStyle = {
        color: "blue",
        fontSize: "20px"
    };
        textAlign: "center",
        width: "250px",
        borderRadius: "10px",
        padding:  "20px",
    const cardStyle = {
        border: "2px solid #333",
export function GreetingCard({ name, age, greeting }) {
            <p>I am {age} years old.</p>
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR65)