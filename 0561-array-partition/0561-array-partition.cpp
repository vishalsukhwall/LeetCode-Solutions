class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        sort(nums.begin() , nums.end());
        for(int i=0,j=1; i<n||j<n; i+=2,j+=2){
            sum += min(nums[i] , nums[j]);
        }
        
        return sum;
    }
};