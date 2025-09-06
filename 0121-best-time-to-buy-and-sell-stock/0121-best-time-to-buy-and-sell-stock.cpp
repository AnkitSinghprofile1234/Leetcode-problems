class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX; //buy ka sabse kam price
    int maxProfit = 0;      // best profit

     for (int price : prices) { //prices ke har element ko ek-ek karke price variable me daalte hai, aur loop ke andar use karo.
        if (price < minPrice) {
         minPrice = price;
     }
      else {
    int profit = price - minPrice;
    if (profit > maxProfit) 
     maxProfit = profit;
                }
            }
        return maxProfit ; 
    }
};