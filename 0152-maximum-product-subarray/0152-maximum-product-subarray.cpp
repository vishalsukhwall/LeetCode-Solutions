class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxval = INT_MIN , num = 1;

        for(int i=0; i<n; i++){
            num *= nums[i];
            
            maxval = max(num , maxval);

            if(num == 0){
                num = 1;
            }
            
        }

        num = 1;
        for(int i=n-1; i>=0; i--){
            num *= nums[i];

            maxval = max(num , maxval);

            if(num == 0){
                num = 1;
            }

        }

        return maxval;
    }
};