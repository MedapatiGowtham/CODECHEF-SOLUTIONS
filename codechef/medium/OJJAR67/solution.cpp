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