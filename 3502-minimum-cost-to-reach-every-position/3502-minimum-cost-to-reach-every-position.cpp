class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();

        vector<int> arr(n , 0);
        arr[0] = cost[0];

        int minval = cost[0];
        for(int i=1; i<n; i++){
            if(cost[i] < minval){
                minval = cost[i];
                arr[i] = minval;
            }
            arr[i] = minval;
        }

        return arr;
    }
};