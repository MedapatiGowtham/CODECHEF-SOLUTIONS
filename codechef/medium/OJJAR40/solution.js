const users = [
  { name: 'Alice', age: 25 },
  { name: 'Bob', age: 30 },
  { name: 'Charlie', age: 22 }
];
users.forEach((user) => {
    console.log(`Hello, ${user.name}! you are ${user.age} years old.`);
});