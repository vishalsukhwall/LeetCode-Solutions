class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        
        for(int i=0; i<n; i++){

            int maxNum = INT_MIN;
            int minNum = INT_MAX;

            for(int j=0; j<=i; j++){
                maxNum = max(maxNum , nums[j]);
            }

            for(int j=i; j<n; j++){
                minNum = min(minNum , nums[j]);
            }
                if(maxNum - minNum <= k){
                    return i;
            }
        }
        return -1;
    }
};