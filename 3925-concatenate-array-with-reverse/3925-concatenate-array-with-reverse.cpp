class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n*2);

        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
        }

        for(int i=n-1; i>=0; i--){
            ans.push_back(nums[i]);
        }

        nums.clear();

        for(int i=0; i<ans.size(); i++){
            if(ans[i] != 0){
                nums.push_back(ans[i]);
            }
        }

        return nums;
    }
};