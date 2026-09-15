export function App() {  
    // Defining dynamic values
    const name = "John"; 
    const age = 25; // Number type (demonstrating type conversion)
    const greeting = "Happy Birthday!";  

    // Inline CSS styling
    const cardStyle = {
        border: "2px solid #333", 
        padding: "20px", 
        borderRadius: "10px", 
        width: "250px",
        textAlign: "center",
        boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
    }; 

    const headingStyle = {
        color: "blue",
        fontSize: "20px"
    };

    return (  
        <div style={cardStyle}>
            {/* Greeting message */}
            <h2 style={headingStyle}>{greeting}</h2>  

           <p>Hello, my name is {name}.</p>
           <p>I am {age} years old.</p>
           <p>Year: {new Date().getFullYear()}</p>