class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        int st = 0 , end = n - 1;

        while(st < end){
            int sum = nums[st] + nums[end];

            if(sum == target){
                return {st+1 , end+1};
                st++ , end--;
            }
            else if(sum > target){
                end--;
            }
            else{
                st++;
            }
        }
        return {};
    }
};