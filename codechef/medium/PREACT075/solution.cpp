import '../App.css';
import Button from './Button';

function ProductItem({ product }) {
  // Helper function to render star ratings
    const renderStars = (rating) => {
        const stars = Math.round(rating || 0);
            return '★'.repeat(stars) + '☆'.repeat(5 - stars);
              };

                return (
                    <div className="product-card">
                          <img src={product.image} alt={product.title} />
                                <h3>{product.title}</h3>
                                      <div className="rating">{renderStars(product.rating)}</div>
                                            <p className="price">${product.price}</p>
                                                  <Button 
                                                          text="Add to Cart" 
                                                                  onClick={() => alert(`Added ${product.title} to cart`)} 
                                                                        />
                                                                            </div>
                                                                              );
                                                                              }

                                                                              export default ProductItem;