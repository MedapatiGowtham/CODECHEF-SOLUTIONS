                        checked={slowNetwork}
                        type="checkbox"
                    <input
                <label className="slow-toggle">
                </nav>
                    <Link to="/dashboard">Dashboard</Link>
                    <Link to="/product/42">Product 42</Link>
                    <Link to="/about">About</Link>
                <h1>React Example (No Lazy Loading)</h1>
                <nav>
                    <Link to="/">Home</Link>
        <div className="app">
            <header>

    return (
    const location = useLocation()
    const [slowNetwork, setSlowNetwork] = useState(false)

export default function App() {
import ProductDetails from './pages/ProductDetails.jsx'
import Dashboard from './pages/Dashboard.jsx'
import About from './pages/About.jsx'
import Home from './pages/Home.jsx'
// ✅ Normal imports (all loaded upfront, no lazy loading)

import { Link, Route, Routes, useLocation } from 'react-router-dom'
import  { useState } from 'react'