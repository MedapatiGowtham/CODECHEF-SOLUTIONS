            return (
                <AuthProvider>
                      <Router>
                              <Navbar />

                                      <Routes>
                                                <Route path="/" element={<Home />} />
                                                          <Route path="/login" element={<Login />} />
                                                                    <Route path="/register" element={<Register />} />
                                                                            </Routes>
                                                                                  </Router>
                                                                                      </AuthProvider>
                                                                                        );
                                                                                        }

                                                                                        export default App;

          function App() {

          import './App.css';

          import { AuthProvider } from './context/AuthContext';
          import Register from './pages/Register';
          import Login from './pages/Login';
          import Home from './pages/Home';
          import Navbar from './components/Navbar';
