class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0 , mid = n-1;
        int high = n-1;

        while(mid >= low){
            if(nums[mid] == 2){
                swap(nums[high] , nums[mid]);
                mid-- , high--;
            }
            else if(nums[mid] == 1){
                mid--;
            }
            else{
                swap(nums[mid] , nums[low]);
                low++;
            }
        }
    }
};