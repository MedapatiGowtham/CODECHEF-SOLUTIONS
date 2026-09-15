// UserProfile component: A reusable component to display user information
function UserProfile(props) {
  return (
    <div>
      <h2>User Profile:</h2>
    </div>
  );
}

// App component: Renders multiple UserProfile components with different data
function App() {
  return (
    <div>
      <UserProfile name="Alice" age={25}/>
    </div>
  );
}

export default App; // Exporting the App component for use in the application
      <p>Name: {props.nme}</p>
      <p>Age: {props.age}</p>
      <UserProfile name="Bob" age={30}/>
