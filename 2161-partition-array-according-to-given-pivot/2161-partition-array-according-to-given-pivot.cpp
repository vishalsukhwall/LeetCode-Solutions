class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size(); 
        vector<int> res(n , 0);

        int low = 0 , right = n-1;

        for (int i = 0, j = n - 1; i < n; i++, j--) {
            if (nums[i] < pivot) {
                res[low] = nums[i];
                low++;
            }
            if (nums[j] > pivot) {
                res[right] = nums[j];
                right--;
            }
        }

        // Fill the remaining gap in the middle with the pivot
        while (low <= right) {
            res[low] = pivot;
            low++;
        }

        return res;
    }
};