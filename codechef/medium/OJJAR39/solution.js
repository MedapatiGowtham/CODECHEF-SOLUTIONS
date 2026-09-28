let originalNumbers=[1,5,10];
let doubleNumbers=[];
originalNumbers.forEach(function(number) {
    let doubled =number * 2;
    doubleNumbers.push(doubled);
});
console.log("Doubled:",doubleNumbers);