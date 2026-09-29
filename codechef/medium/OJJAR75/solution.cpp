  }

  for (let i = start; i < end; i += step) {
    result.push(i);
  }

  return result;
};

// update this function 
function NumberBoxes({ count }) {  
  return (  
    <ul>
      {range(1, count + 1).map((num) => (
    </ul>
  );  
}

export default function App() {
  return (
    <NumberBoxes count={5} />
    start = 0;
    end = start;
  if (typeof end === 'undefined') {

        <li key={num}>{num}</li>
      ))}
  );
}
  let result = [];