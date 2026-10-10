class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        sort(nums.begin() , nums.end());
        
        int n = nums.size();
        int len = 1 , maxlen = 0;

        if(n == 0){
            return 0;
        }

        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1] + 1){
                len++;
            } 
            else{
                maxlen = max(maxlen , len);
                len = 1;
            }
        }

        return max(maxlen , len);
    }
};