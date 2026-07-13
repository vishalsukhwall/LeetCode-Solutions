class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;

        while(st <= end){
            int mid = st + (end-st);

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return st;
    }
};