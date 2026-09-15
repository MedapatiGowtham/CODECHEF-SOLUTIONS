
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
