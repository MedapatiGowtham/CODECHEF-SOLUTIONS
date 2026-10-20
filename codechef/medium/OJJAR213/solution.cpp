        profileActionText={profileActionText}
      />
    </div>
  );
}

// 3. Another Intermediate Layout Component (Doesn't use the props)
function CardWrapper({ userName, userBio, profileActionText }) {
  return (
    <div className="card-wrapper">
      {/* Passes props down */}
      <Card
        userName={userName}
        userBio={userBio}
        profileActionText={profileActionText}
      />
        userBio={userBio}
        userName={userName}
      <CardWrapper
      <h2>User Section</h2>
      {/* Passes props down */}
    <div className="main-content">
  return (
function MainContentArea({ userName, userBio, profileActionText }) {
// 2. Intermediate Layout Component (Doesn't use the props)
}

  );
    />
      profileActionText={userData.actionText}
      userBio={userData.bio}
      userName={userData.name}
    <MainContentArea
  return (
  // Prop Drilling starts here
import './App.css'; // Make sure styles.css is in the same folder

// 1. Top-level Page Component (Holds the data)
function UserProfilePage() {
  const userData = {
    name: 'Alice Wonderland',
    bio: 'Curious explorer of digital rabbit holes.',
    actionText: 'View Profile',
  };
