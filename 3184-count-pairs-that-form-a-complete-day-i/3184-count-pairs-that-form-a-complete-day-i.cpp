class Solution {
public:
    int countCompleteDayPairs(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = nums[i] + nums[j];

                if(sum % 24 == 0){
                    count++;
                }
            }
        }

        return count;
    }
};