class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        while(nums.size() > 1){
            vector<int> arr;

            for(int i=0; i+1<nums.size(); i++){
                int num = (nums[i] + nums[i+1]) % 10;
                arr.push_back(num);
            }

            nums = arr;
        }

        return nums[0];
    }
};