                invitee => invitee.email === 'gnicomedes@widgetco.com'
            );
            if (inviteeIndex !== -1) {
                eventToUpdate.metadata.invitees.splice(inviteeIndex, 1);
            }
        }
    }));
  };

  // --- Reset Button Handler (Logic remains the same) ---
  const handleReset = () => {
    setEvents(getInitialState());
  };

  // 2. Use className instead of style prop
  return (
    <div className="App"> {/* Use App class for main container */}
      <h1>Calendar Events State</h1>

      {/* Use button-container class for the div */}
      <div className="button-container">
        {/* Buttons now use default styles from App.css */}
        <button onClick={handleRemoveManually}>
          Remove Gerarda (Manual Immutable Update)
        </button>
        <button onClick={handleRemoveWithImmer}>
          Remove Gerarda (Using Immer)
        </button>
        <button onClick={handleReset}>
          Reset State
        </button>
      </div>

      <h2>Current Events State:</h2>
      {/* Use state-display class for the pre tag */}
      <pre className="state-display">
        {JSON.stringify(events, null, 2)}
      </pre>
    </div>
  );
}

export default App;