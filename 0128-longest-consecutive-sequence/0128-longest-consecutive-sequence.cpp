class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        
        sort(nums.begin() , nums.end());
        int maxlen = 0;

        int i = 0;
        while(i < n){
            if(i > 0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }

            int len = 1;
            int j = i;

            while(j + 1 < n){
                if(nums[j+1] == nums[j] + 1){
                    len++;
                    j++;
                }
                else if(nums[j+1] == nums[j]){
                    j++;
                }
                else{
                    break;
                }
            }
            
            maxlen = max(len , maxlen);
            i = j + 1;
        }
        return maxlen;
    }
};