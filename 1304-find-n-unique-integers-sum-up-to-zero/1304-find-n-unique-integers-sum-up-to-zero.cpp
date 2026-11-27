class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;

        for(int i=1; i<=n/2; i++){
            nums.push_back(i);
            nums.push_back(-i);
        }

        if(n % 2 == 1){
            nums.push_back(0);
        }

        return nums;
    }
};