function App() {
  function addPoints(points) {
    console.log(`Added ${points} points!`);  // Corrected log message
  }

  function subtractPoints(points) {
    console.log(`Subtracted ${points} points!`); // Corrected log message
  }

  function resetScore() {
    console.log("Score reset to 0!");
  }

  return (
    <>
      <h1>Score Tracker</h1>
      <button onClick={() => addPoints(5)}>+5 Points</button>
      <button onClick={() => subtractPoints(3)}>-3 Points</button>
      <button onClick={resetScore}>Reset</button>
      
    </>
  );
}

export default App;
