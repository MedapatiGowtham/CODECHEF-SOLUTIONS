          key={person.id}
          name={person.name}
      {/* STEP 2: Render GreetingCards for all people here */}
      {/* Hint: Use map() to loop through the 'people' array */}
      {people.map((person) => (
        <GreetingCard
    <div style={appContainerStyle}>
  return (

  };
      minHeight: '100vh'
      backgroundColor: '#f4f7f6',
      alignItems: 'flex-start',
      justifyContent: 'center',
      display: 'flex',
      flexWrap: 'wrap',
  const appContainerStyle = {

  ];
    { id: 3, name: "Charlie", age: 35, greeting: "Best wishes, Charlie!", favoriteColor: "mediumseagreen" }
    { id: 2, name: "Bob", age: 25, greeting: "Have a fantastic day, Bob!", favoriteColor: "tomato" },
export function App() {
  const people = [
    { id: 1, name: "Alice", age: 30, greeting: "Happy Birthday, Alice!", favoriteColor: "mediumpurple" },
}

    </div>
  );
      <p style={{ ...footerStyle, marginTop: '0' }}>
          Have a great day! <span style={emojiStyle}>🎉</span>
      </p>
      <p style={footerStyle}>Year: {new Date().getFullYear()}</p>
      </p>


        My favorite color is <span style={favoriteColorTextStyle}>{favoriteColor}</span>.
      <p style={baseParagraphStyle}> 

      {/* STEP 1: Display the person's favorite color below this line */}
      </p>
        I am {age} years old.
      <p style={{ ...baseParagraphStyle, fontWeight: 500 }}>
      </p>
        Hello, my name is <span style={{ fontWeight: 'bold' }}>{name}</span>.
      <p style={{ ...baseParagraphStyle, fontWeight: 500 }}>

          age={person.age}
          greeting={person.greeting}
          favoriteColor={person.favoriteColor}
          />
      ))}
    </div>
  );
}

export default App;
      <h2 style={headingStyle}>{greeting}</h2>
    <div style={cardStyle}>
  return (
