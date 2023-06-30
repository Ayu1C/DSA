class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit = 0;
       int profit;
       int minSoFar = prices[0];
       for(int i=0; i<prices.size(); i++)
       {
           if(prices[i]<minSoFar)
           {
               minSoFar = prices[i];
           }
           profit = prices[i] - minSoFar;
           if(profit > maxProfit)
           {
               maxProfit = profit;
           }
       }
       return maxProfit;
    }
};