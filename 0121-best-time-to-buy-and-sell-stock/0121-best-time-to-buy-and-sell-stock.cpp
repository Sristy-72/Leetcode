class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int profit=0;
    int curr_profit=0;
    int mini=prices[0];
    int m= prices.size();
      for(int i=1;i<m;i++){
         curr_profit=prices[i]-mini;
         profit= max(curr_profit,profit);
         mini=min(prices[i],mini);
      }
      return profit;
    }
};