class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = INT_MAX;
        int total_profit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] > cheapest){
                total_profit += prices[i] - cheapest;
            }
            cheapest = prices[i];
        }

        return total_profit;
    }
};