class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2 , -1);

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }        
        return ans;
    }
};