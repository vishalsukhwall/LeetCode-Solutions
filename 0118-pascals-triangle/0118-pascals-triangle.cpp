class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> nums(n , vector<int>(n,1));

        for(int i=0; i<n; i++){
            nums[i].resize(i+1 , 1);

            for(int j=1; j<i; j++){

                nums[i][j] = nums[i-1][j] + nums[i-1][j-1];
            }
        }
        return nums;
    }
};