class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();

        int even = 0 , odd = 0;
        for(int i=n-1; i>=0; i--){
            if(nums[i] % 2 == 0){
                nums[i] = odd;
                even++;
            }
            else{
                nums[i] = even;
                odd++;
            }
        }

        return nums;
    }
};