let originalNumbers = [1, 5, 10];
let doubledNumbers = [];
originalNumbers.forEach((number) => {
    let doubleValue = number*2;
    doubledNumbers.push(doubleValue);
});
console.log("Doubled:", doubledNumbers);