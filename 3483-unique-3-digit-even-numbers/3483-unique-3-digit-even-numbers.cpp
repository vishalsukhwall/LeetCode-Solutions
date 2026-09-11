class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> uniqueNumbers;
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0) continue;

            for(int j=0; j<n; j++){
                if(j == i) continue;

                for(int k=0; k<n; k++){

                    if(k == i || k == j) continue;
                    if(nums[k] % 2 == 0){
                       int num = nums[i] * 100 + nums[j] * 10 + nums[k];
                        uniqueNumbers.insert(num);
                    }
                }
            }
        }
        return uniqueNumbers.size();
    }
};