class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 1;

        for(int i=0; i<n; i++){
            long long num = 1 , g = 0 , l = 1;
            
            for(int j=i; j<n; j++){
                num *= nums[j];
                g = gcd(g , nums[j]);
                l = lcm(l , nums[j]);

                if(num > l*g) break;

                if(num == g*l) maxlen = max(maxlen , j - i + 1);
            }
        }

        return maxlen;
    }
};