class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        
        int l = 0 , r = n-1;
        int lmax = 0 , rmax = 0;
        int sum = 0;

        while(l < r){
            lmax = max(lmax , nums[l]);
            rmax = max(rmax , nums[r]);

            if(lmax < rmax){
                sum += lmax - nums[l];
                l++;
            }
            else{
                sum += rmax - nums[r];
                r--;
            }
        }

        return sum;
    }
};