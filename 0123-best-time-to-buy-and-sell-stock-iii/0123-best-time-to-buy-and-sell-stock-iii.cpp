class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first_buy = INT_MAX;
        int first_sell = 0;
        int second_buy = INT_MAX;
        int second_sell = 0;
        int n = prices.size();

        for(int i=0; i<n; i++){
            if(prices[i] < first_buy){
                first_buy = prices[i];
            }

            if(prices[i] - first_buy > first_sell){
                first_sell = prices[i] - first_buy;
            }

            if(prices[i] - first_sell < second_buy){
                second_buy = prices[i] - first_sell;
            }

            if(prices[i] - second_buy > second_sell){
                second_sell = prices[i] - second_buy;
            }
            
        }
        return second_sell;
    }
};