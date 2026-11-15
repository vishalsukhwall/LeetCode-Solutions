class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n = nums.size();
        int odd = 0 , even = 1;
        int sum = 0;
        int count = 0 , m = 1e9 + 7;

        for(int i=0; i<n; i++){
            sum += nums[i];

            if(sum % 2 == 0){
                count = (count + odd) % m;
                even++;
            }
            else{
                count = (count + even) % m;
                odd++;
            }
        }

        return count;
    }
};