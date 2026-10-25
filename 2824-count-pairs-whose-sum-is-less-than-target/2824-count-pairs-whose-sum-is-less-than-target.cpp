class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int count = 0;

        int st = 0 , end = n-1;
        while(st <= end){
            int sum = nums[st] + nums[end];

            if(sum < target){
                count += end - st;
                st++;
            }
            else{
                end--;
            }
        }

        return count;
    }
};