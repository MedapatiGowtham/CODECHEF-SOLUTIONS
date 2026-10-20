                                                                                            } else if (event.key === 'ArrowRight') {
                                                                                                  console.log('ArrowRight pressed');
                                                                                                      } else if (event.key === 'ArrowUp') {
                                                                                                            console.log('ArrowUp pressed');
                                                                                                                } else if (event.key === 'ArrowDown') {
                                                                                                                      console.log('ArrowDown pressed');
                                                                                                                          }
                                                                                                                            };

                                                                                                                              useEffect(() => {
                                                                                                                                  // Add event listener when the component mounts
                                                                                                                                      window.addEventListener('keydown', handleKeyDown);

                                                                                                                                          // Remove event listener when the component unmounts
                                                                                                                                              return () => {
                                                                                                                                                    window.removeEventListener('keydown', handleKeyDown);
                                                                                                                                                        };
                                                                                                                                                          }, []); 
                                                                                                                                                            // --- End of Solution for Part 3 ---


                                                                                                                                                              return (
                                                                                                                                                                  <div className="container">
                                                                                                                                                                        <h1>2048 Game</h1>
                                                                                                                                                                              <div className="board">
                                                                                                                                                                                      {board.map((row, rowIndex) => (
                                                                                                                                                                                                <div key={rowIndex} className="row">
                                                                                                                                                                                                            {row.map((cell, cellIndex) => (
                                                                                                                                                                                                                          <div key={cellIndex} className={`cell cell-${cell}`}>
                                                                                                                                                                                                                                          {cell !== 0 ? cell : ''}
                                                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                                                    ))}
                                                                                                                                                                                                                                                                              </div>
                                                                                                                                                                                                                                                                                      ))}
                                                                                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                                                                                </div>
                                                                                                                                                                                                                                                                                                  );
                                                                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                                                                  export default App;