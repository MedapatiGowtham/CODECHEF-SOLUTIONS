// Renders a dynamic HTML element with combined classes
// Defaults to <p> if 'as' prop is not provided
function Text({
  as: Element = 'p',  // HTML tag type (h1, p, etc.)
    children,          // Content inside the element
      className = '',    // Additional custom classes
        ...rest           // All other props (htmlFor, id, etc.)
        }) {
          return (
              <Element
                    className={`text text--${Element} ${className}`}  // Base + type + custom classes
                          {...rest}                                        // Spread remaining props
                              >
                                    {children}  {/* Render nested content */}
                                        </Element>
                                          );
                                          };

                                          export default Text;