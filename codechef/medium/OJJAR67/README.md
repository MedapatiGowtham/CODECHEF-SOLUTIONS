# OJJAR67

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task

In this task, you will create a  **Profile Card**  component using React. This will involve  **JSX, React components, props, and basic CSS styling**.

#### 1. Create a ProfileCard Component
- This component should receive the following props: name → The person’s name bio → A short description about the person avatarUrl → URL of the person's profile image
- Inside the component, display these props properly using JSX.
#### 2. Use the ProfileCard Component inside App.js
- Inside the App component, render the ProfileCard component.
- Pass appropriate values for name, bio, and avatarUrl (make sure name, bio, avatarUrl not be null).

your final project should be like this

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T06:31:53.755Z  

```cpp
      <h2 style={headingStyle}>{name}</h2>

    borderRadius: "50%",
    marginBottom: "10px",
  };

  return (
    <div style={cardStyle}>
      <img src={avatarUrl} alt={`${name}'s avatar`} style={avatarStyle} />
    boxShadow: "2px 2px 10px rgba(0,0,0,0.1)",
    fontFamily: "Arial, sans-serif",
    margin: "auto",
  };

  const headingStyle = {
    color: "blue",
    fontSize: "20px",
  };

  const avatarStyle = {
    width: "100px",
    height: "100px",
const ProfileCard = ({ name, bio, avatarUrl }) => {
  const cardStyle = {
    border: "2px solid #333",
    padding: "20px",
    borderRadius: "10px",
    width: "250px",
    textAlign: "center",
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR67)