class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 0;
        int profit = 0;
        while(j < prices.size()){
            if(prices[j] < prices[i] && j > i){
                i = j;
            } 
            else if(prices[i] < prices[j] && i < j){
                profit = max(prices[j] - prices[i], profit);
            }
            j++;
        }
        return profit;
    }
};
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/