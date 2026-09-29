class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int num = nums[0];
        int count = 0;

        for(int i=0; i<n; i++){
            if(count == 0){
                num = nums[i];
                count = 1;
            }
            else if(num == nums[i]){
                count++;
            }
            else{
                count--;
                }
            }
        

        int ans = 0;
        for(int val : nums){
            if(num == val){
                ans++;
            }
        }

        if(ans > n/2){
            return num;
        }
        return -1;
    }
};