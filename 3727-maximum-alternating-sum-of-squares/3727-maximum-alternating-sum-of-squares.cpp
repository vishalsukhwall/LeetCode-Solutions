class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        
        // Sabhi numbers ko positive bana kar sort karte hain taaki magnitude ke hisaab se arrange ho sakein
        for(int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        
        int k = ceil(n / 2.0);

        long long positiveSum = 0, negativeSum = 0;
        
        for(int i = 0; i < n; i++){
            long long square = (long long)nums[i] * nums[i];

            if(i < n - k){
                negativeSum += square;
            }
            else{
                positiveSum += square;
            }
        }

        return positiveSum - negativeSum;
    }
};