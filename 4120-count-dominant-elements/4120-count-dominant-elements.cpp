class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();

        if(n <= 1){
            return 1;
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(i == 0){
                if(nums[i] >= nums[i+1]){
                    count++;
                }
            }
            else if(i == n-1){
                if(nums[i-1] <= nums[i]){
                    count++;
                }
            }
            else{

                if(2LL * nums[i] >= (nums[i-1] + nums[i+1])){
                    count++;
                }
            }
        }

        return count;
    }
};