import { useState, useEffect } from 'react';
import BlogCard from '../components/BlogCard';
import API from '../utils/api';

const Home = () => {
    const [blogs, setBlogs] = useState([]);
        const [loading, setLoading] = useState(true);
            const [error, setError] = useState('');

                useEffect(() => {
                        const fetchBlogs = async () => {
                                    try {
                                                    const response = await API.get('/blogs');
                                                                    setBlogs(response.data);
                                                                                    setError('');
                                                                                                } catch (err) {
                                                                                                                setError(
                                                                                                                                    err.response?.data?.message || 'Failed to fetch blogs'
                                                                                                                                                    );
                                                                                                                                                                } finally {
                                                                                                                                                                                setLoading(false);
                                                                                                                                                                                            }
                                                                                                                                                                                                    };

                                                                                                                                                                                                            fetchBlogs();
                                                                                                                                                                                                                }, []);

                                                                                                                                                                                                                    if (loading) {
                                                                                                                                                                                                                            return <div className="loading">Loading blogs...</div>;
                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                    if (error) {
                                                                                                                                                                                                                                            return <div className="error">{error}</div>;
                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                    return (
                                                                                                                                                                                                                                                            <div className="home-container">
                                                                                                                                                                                                                                                                        <h1>Latest Blogs</h1>
                                                                                                                                                                                                                                                                                    {blogs.length === 0 ? (
                                                                                                                                                                                                                                                                                                    <p>No blogs available yet. Be the first to create one!</p>
                                                                                                                                                                                                                                                                                                                ) : (
                                                                                                                                                                                                                                                                                                                                <div className="blog-list">
                                                                                                                                                                                                                                                                                                                                                    {blogs.map((blog) => (