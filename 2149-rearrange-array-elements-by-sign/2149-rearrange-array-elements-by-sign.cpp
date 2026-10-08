class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> num1;
        vector<int> num2;

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                num1.push_back(nums[i]);
            }
            else{
                num2.push_back(nums[i]);
            }
        }

        for(int i=0; i<n/2; i++){
            ans.push_back(num1[i]);
            ans.push_back(num2[i]);
        }

        return ans;
    }
};