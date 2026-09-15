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
**Submitted:** 2026-09-15T06:14:53.258Z  

```cpp

      <p>{bio}</p>
    </div>
  );
};

// Update the App component - Renders the ProfileCard component
const App = () => {
  const avatarUrl = "https://cdn.codechef.com/images/problems/PREACT018/a29545c678c75e59bc684868407b1d13.webp";

  // update the user name and bio
  const name = "John Doe";
  const bio = "Frontend Developer | React Enthusiast | Codechef User";

  return (
    <div>

      <h1 style={{ textAlign: "center", fontFamily: "Arial, sans-serif" }}>
        {/* Write heading here */}
      </h1>

      {/* Render the ProfileCard component with user details */}
      <ProfileCard



    </div>
  );
};

export default App;
      <h2 style={headingStyle}>{name}</h2>

      <img src={avatarUrl} alt={`${name}'s avatar`} style={avatarStyle} />
    <div style={cardStyle}>
  return (
        Profile Card
        name={name}
        bio={bio}
        avatarUrl={avatarUrl}
      />

```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR67)