import React from 'react';
import './App.css';

function App() {
  // 1. Update the state to use objects with unique IDs instead of plain strings
    const [guests, setGuests] = React.useState([
        { id: 1, name: 'Bruce Wayne' },
            { id: 2, name: 'Clark Kent' },
                { id: 3, name: 'Diana Prince' }
                  ]);

                    return (
                        <div className="container">
                              <h1>Guest List</h1>
                                    <ul className="guest-list">
                                            {/* Remove the 'index' parameter, we only need the 'guest' object now */}
                                                    {guests.map((guest) => (
                                                              
                                                                        // 2. Use the unique guest.id as the key
                                                                                  <li key={guest.id} className="guest-item">
                                                                                              
                                                                                                          {/* 3. Bind the input to the guest's name */}
                                                                                                                      <input defaultValue={guest.name} className="guest-input" />
                                                                                                                                  
                                                                                                                                              <button
                                                                                                                                                            className="remove-btn"
                                                                                                                                                                          onClick={() => {
                                                                                                                                                                                          // 4. Safely remove the item by filtering out the matching ID
                                                                                                                                                                                                          const updatedGuests = guests.filter(g => g.id !== guest.id);
                                                                                                                                                                                                                          setGuests(updatedGuests);
                                                                                                                                                                                                                                        }}
                                                                                                                                                                                                                                                    >
                                                                                                                                                                                                                                                                  Remove
                                                                                                                                                                                                                                                                              </button>
                                                                                                                                                                                                                                                                                        </li>
                                                                                                                                                                                                                                                                                                ))}
                                                                                                                                                                                                                                                                                                      </ul>
                                                                                                                                                                                                                                                                                                          </div>
                                                                                                                                                                                                                                                                                                            );
                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                            export default App;