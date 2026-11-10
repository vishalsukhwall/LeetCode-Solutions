class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        vector<int> lmax(n , 0);
        vector<int> rmax(n , 0);

        lmax[0] = nums[0];
        rmax[n-1] = nums[n-1];

        for(int i=1; i<n; i++){
            lmax[i] = max(nums[i] , lmax[i-1]);
        }

        for(int i=n-2; i>=0; i--){
            rmax[i] = max(nums[i] , rmax[i+1]);
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += min(lmax[i] , rmax[i]) - nums[i];
        }

        return sum;
    }
};