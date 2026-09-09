const words = ["apple", "banana", "cherry", "watermelon", "kiwi"];
const longestWord = words.reduce((longest, current) => {
    if(current.length > longest.length) {
        return current;
    }
    return longest;
});
console.log(longestWord);


