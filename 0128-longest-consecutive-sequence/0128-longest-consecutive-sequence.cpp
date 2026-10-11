class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0 , len = 1;

        if(n == 0){
            return 0;
        }

        sort(nums.begin() , nums.end());

        for(int i=1; i<n; i++){

            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1] + 1){
                len++;
            }
            else{
                maxlen = max(len , maxlen);
                len = 1;
            }
        }
        return max(maxlen , len); 
    }
};