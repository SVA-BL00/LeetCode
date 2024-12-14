class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int cheapest = INT_MAX;

        for(int i = 0 ; i < prices.size(); i++){
            if(prices[i] < cheapest){
                cheapest = prices[i];
            }else{
                max_profit = max(prices[i] - cheapest, max_profit);
            }
        }

        return max_profit;
    }
};