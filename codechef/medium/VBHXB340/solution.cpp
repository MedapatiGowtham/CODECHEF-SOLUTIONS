import React from 'react';

const BlogCard = ({ blog, onDelete }) => {
    const currentUser = JSON.parse(
            localStorage.getItem('user') || '{}'
                );
                    
                        const authorId = 
                                typeof blog.author === 'object'
                                            ? blog.author?._id
                                                        : blog.author;
                                                                    
                                                                        const currentUserId = currentUser.id || currentUser._id;
                                                                            
                                                                                const isOwner = 
                                                                                        currentUserId && 
                                                                                                authorId && 
                                                                                                        currentUserId.toString() === authorId.toString();

                                                                                                            return (
                                                                                                                    <div className="blog-card">
                                                                                                                                <h2>{blog.title}</h2>
                                                                                                                                            <p>{blog.content}</p>
                                                                                                                                                        {isOwner && (
                                                                                                                                                                        <button 
                                                                                                                                                                                            type="button"
                                                                                                                                                                                                                onClick={() => onDelete(blog._id)}
                                                                                                                                                                                                                                >
                                                                                                                                                                                                                                                    Delete
                                                                                                                                                                                                                                                                    </button>
                                                                                                                                                                                                                                                                                )}
                                                                                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                                                                            );
                                                                                                                                                                                                                                                                                            };

                                                                                                                                                                                                                                                                                            export default BlogCard;