import React from 'react';
import { BrowserRouter, Routes, Route } from 'react-router-dom';
import { AuthProvider } from './context/AuthContext';
import Navbar from './components/Navbar';
import PrivateRoute from './components/PrivateRoute';
import Home from './pages/Home';
import Login from './pages/Login';
import Register from './pages/Register';
import CreateBlog from './pages/CreateBlog';
import MyBlogs from './pages/MyBlogs';
import './App.css';

function App() {
    return (
            <BrowserRouter>
                        <AuthProvider>
                                        <Navbar />
                                                        <Routes>
                                                                            {/* Public routes */}
                                                                                                <Route path="/" element={<Home />} />
                                                                                                                    <Route path="/login" element={<Login />} />
                                                                                                                                        <Route path="/register" element={<Register />} />

                                                                                                                                                            {/* Protected routes — only for logged-in users */}
                                                                                                                                                                                <Route element={<PrivateRoute />}>
                                                                                                                                                                                                        <Route path="/create" element={<CreateBlog />} />
                                                                                                                                                                                                                                <Route path="/my-blogs" element={<MyBlogs />} />
                                                                                                                                                                                                                                                    </Route>
                                                                                                                                                                                                                                                                    </Routes>
                                                                                                                                                                                                                                                                                </AuthProvider>
                                                                                                                                                                                                                                                                                        </BrowserRouter>
                                                                                                                                                                                                                                                                                            );
                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                            export default App;