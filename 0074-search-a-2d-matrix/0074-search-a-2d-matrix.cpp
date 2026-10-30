class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int row = nums.size();
        int col = nums[0].size();

        int r = 0 , c = col*row-1;

        while(r <= c){
            int mid = r + (c - r)/2;

            int val = nums[mid/col][mid%col];
            if(val == target){
                return true;
            }
            else if(val < target){
                r = mid + 1;
            }
            else{
                c = mid - 1;
            }
        }

        return false;
    }
};