class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();

        int minval = cost[0];

        for(int i=1; i<n; i++){
            if(minval > cost[i]){
                minval = cost[i];
                cost[i] = cost[i];
            }
            cost[i] = minval;
        }

        return cost;
    }
};