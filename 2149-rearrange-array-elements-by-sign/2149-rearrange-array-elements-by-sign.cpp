class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        
        int i = 0;
        int j = 1;
        
        for(int val : nums){
            if(val > 0){
                ans[i] = val;
                i += 2;
            }
            else{
                ans[j] = val;
                j += 2;
            }
        }
        return ans;
    }
};