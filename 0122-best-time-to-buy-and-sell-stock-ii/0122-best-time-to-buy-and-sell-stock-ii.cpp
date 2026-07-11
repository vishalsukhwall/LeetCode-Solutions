class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int total_profit = 0;

        for(int i=0; i<n; i++){
            if(i > 0 && prices[i] > prices[i-1]){
                total_profit += prices[i] - prices[i-1];
            }
        }
        return total_profit;
    }
};