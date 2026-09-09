const cartPrices = [29.99, 9.99, 4.99, 14.99, 25.00];
const totalPrice = cartPrices.reduce((sum, price) => sum+price, 0);
console.log(totalPrice);