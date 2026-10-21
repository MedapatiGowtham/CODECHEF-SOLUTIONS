                <nav>
                <h1>React Lazy Loading + Suspense</h1>
    return (
        <div className="app">
            <header>
export default function App() {
    const location = useLocation()
    const [slowNetwork, setSlowNetwork] = useState(false)

import { Suspense, lazy, useState } from 'react'
import { Link, Route, Routes, useLocation } from 'react-router-dom'

// Lazy imports (code-splitting)
const Home = lazy(() => import('./pages/Home.jsx'))
const About = lazy(() => import('./pages/About.jsx'))
const Dashboard = lazy(() => import('./pages/Dashboard.jsx'))
const ProductDetails = lazy(() => import('./pages/ProductDetails.jsx'))

function LoadingSpinner() {
    return (
        <div className="center">
            <div className="spinner" />
            <p>Loading...</p>
        </div>
    )
}
