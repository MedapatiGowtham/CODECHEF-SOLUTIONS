// Export a function component named DiscountMessage that takes a prop 'isPremiumMember'
export function DiscountMessage({ isPremiumMember }) {
  
  if(isPremiumMember) {

  
}

function App() {
  const isPremiumMember = true; 

  return (
    <div>
      <DiscountMessage isPremiumMember={isPremiumMember} />
    </div>
  );
}

    return <p> You get a 20% discount!</p>
  } else {
    return <p>Sign up for premium to unlock discount</p>
  }
export default App; // Export the App component as default
