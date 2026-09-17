# OJJAR69

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### GreetingCard Component

Create personalized greeting cards that show each person's name, age, greeting message, and  **favorite color**  using React components.

 **Steps to Follow:** 

- Show Favorite Color in Greeting Card Modify the GreetingCard component to display the person's favorite color in a new paragraph (<p> tag) below their age. Use the existing favoriteColor prop to display this information. Example format: <p> My favorite color is {favoriteColor}.</p>
- Render Cards for All People In the App component, display a GreetingCard for every person in the people array. Pass all required information (name, age, greeting message, favorite color) as props to each card. Use the map() method to loop through the people array.

 **At the end your app should look like this**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T05:25:35.519Z  

```cpp
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR69)