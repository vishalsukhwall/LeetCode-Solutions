class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIdx = 0;
        int maxIdx = 0;

        for(int i=0; i<n; i++){
            if(nums[minIdx] > nums[i]) minIdx = i;
            if(nums[maxIdx] < nums[i]) maxIdx = i;
        }

        if(minIdx > maxIdx) {
            swap(minIdx , maxIdx);
        }

        int opt_1 = maxIdx + 1;
        int opt_2 = n - minIdx;
        int opt_3 = (minIdx + 1) + (n - maxIdx);

        return min({opt_1 , opt_2 , opt_3}); 
    }
};