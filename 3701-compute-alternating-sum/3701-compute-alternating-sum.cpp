class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        bool ispos = true;

        for(int i=0; i<n; i++){
            if(ispos){
                sum += nums[i];
                ispos = !ispos;
            }
            else{
                sum -= nums[i];
                ispos = !ispos;
            }
        }

        return sum;
    }
};