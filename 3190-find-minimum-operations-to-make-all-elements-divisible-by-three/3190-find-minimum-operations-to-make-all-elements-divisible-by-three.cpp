class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        
        int count = 0;
        for(int val : nums){
            if((val+1) % 3 == 0){
                count++;
            }
            else if((val-1) % 3 == 0){
                count++;
            }
        }

        return count;
    }
};