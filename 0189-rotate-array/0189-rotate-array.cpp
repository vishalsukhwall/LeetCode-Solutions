class Solution {
public:
    void helper(vector<int>& nums , int i , int j){
        while(i < j){
            swap(nums[i] , nums[j]);
            i++ , j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        helper(nums , 0 , n-1);

        helper(nums , k , n-1);

        helper(nums , 0 , k - 1);
    }
};