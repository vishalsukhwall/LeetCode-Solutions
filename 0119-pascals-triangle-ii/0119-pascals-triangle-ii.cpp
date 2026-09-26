class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> nums(n+1, 1);

        for(int i=2; i<=n; i++){

            for(int j=i-1; j>0; j--){
                
                nums[j] = nums[j-1] + nums[j];
            }
        }
        return nums;
    }
};