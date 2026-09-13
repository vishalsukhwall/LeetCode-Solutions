class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int n = nums.size();

        int x = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == "++X" || nums[i] == "X++"){
                x++;
            }
            else{
                x--;
            }
        }

        return x;
    }
};