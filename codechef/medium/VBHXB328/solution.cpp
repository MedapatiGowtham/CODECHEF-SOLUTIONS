import React from 'react';
import './BlogCard.css';

const BlogCard = ({ title, content, author, date }) => {
    return (
            <div className="blog-card">
                        <h2>{title}</h2>
                                    <p>{content}</p>
                                                <div className="blog-meta">
                                                                <span>By {author}</span> | <span>Published on {date}</span>
                                                                            </div>
                                                                                    </div>
                                                                                        );
                                                                                        };

                                                                                        export default BlogCard;