class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int n = nums.size();

        int x = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == "++X" || nums[i] == "X++"){
                x += 1;
            }
            else{
                x -= 1;
            }
        }

        return x;
    }
};