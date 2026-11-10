class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int buy = INT_MAX , sell = INT_MIN;
        for(int val : prices){
            buy = min(buy , val);
            sell = max(sell , val - buy);
        }

        return sell;
    }
};