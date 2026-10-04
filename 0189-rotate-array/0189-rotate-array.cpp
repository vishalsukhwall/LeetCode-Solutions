class Solution {
public:
    void reversed(vector<int>& nums , int i , int j){
        while(i <= j){
            swap(nums[i] , nums[j]);
            i++ , j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;
        reversed(nums , 0 , n-1);
        reversed(nums , 0 , k-1);
        reversed(nums , k , n-1);
    }
};