class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size();
        int carry = 1;
        
        for(int i=n-1; i>=0; i--){
            int sum = nums[i] + carry;
            nums[i] = sum % 10;
            carry = sum/10;
        }

        if(carry > 0){
            nums.insert(nums.begin() , 1);
        }

        return nums;   
    }     
};