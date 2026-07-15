class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans = {-1,-1};

        int st = 0, end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(nums[mid] == target){
                ans[0] = mid;
                end = mid-1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }

        st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end-st)/2;

            if(nums[mid] == target){
                ans[1] = mid;
                st = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};