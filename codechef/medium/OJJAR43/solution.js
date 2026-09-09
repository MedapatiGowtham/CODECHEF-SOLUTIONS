let words = ["apple", "banana", "pear", "kiwi", "grape", "orange"];
let shortWords = words.filter((word) => {
    return word.length <=4;
});
console.log(shortWords);