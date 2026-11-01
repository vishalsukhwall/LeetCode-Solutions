class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();

        int minval = INT_MAX;
        for(int i=0; i<n; i+=2){

            int second = nums[i+1];

            int mult = 10;
            if(second == 1000) mult = 10000;
            else if(second >= 100) mult = 1000;
            else if(second >= 10) mult = 100;

            int merged = nums[i] * mult + second;

            minval = min(minval , merged);
        }

        return minval;
    }
};