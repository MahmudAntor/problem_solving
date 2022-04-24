/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
  if(prices.length < 2)
    return 0;
  let maxProfit=0, minPrice=prices[0];
  prices.forEach(price => {
    maxProfit = Math.max(maxProfit, price - minPrice);
    minPrice = Math.min(minPrice, price);
  });
  return maxProfit;
};