class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int num = nums[0];
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == num){
                count++;
            }
            else{
                if(count == 0){
                    num = nums[i];
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return num;
    }
};