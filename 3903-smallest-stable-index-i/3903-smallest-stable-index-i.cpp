class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minVec(n);

        int minVal = INT_MAX;
        for(int i=n-1; i>=0; i--){
            minVal = min(minVal , nums[i]);
            minVec[i] = minVal;
        }

        int maxVal = INT_MIN;
        for(int i=0; i<n; i++){
            maxVal = max(maxVal , nums[i]);

            if(maxVal - minVec[i] <= k){
                return i;
            }
        }
        return -1;
        // for(int i=0; i<n; i++){

        //     int maxNum = INT_MIN;
        //     int minNum = INT_MAX;

        //     for(int j=0; j<=i; j++){
        //         maxNum = max(maxNum , nums[j]);
        //     }

        //     for(int j=i; j<n; j++){
        //         minNum = min(minNum , nums[j]);
        //     }
        //         if(maxNum - minNum <= k){
        //             return i;
        //     }
        // }
        // return -1;
    }
};