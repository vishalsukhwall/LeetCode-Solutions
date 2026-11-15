class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long even = 1;
        long long odd = 0;
        long long count = 0;
        long long sum = 0;
        long long MOD = 1e9 + 7;

        for(int val : nums){
            sum += val;

            if(sum % 2 != 0){
                count = (count + even) % MOD; 
                odd++;
            }
            else{
                count = (count + odd) % MOD;
                even++;
            }
        }

        return count;
    }
};