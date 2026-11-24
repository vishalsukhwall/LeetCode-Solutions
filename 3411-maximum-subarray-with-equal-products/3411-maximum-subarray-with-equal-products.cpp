class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxlen = INT_MIN;
        const long long LIMIT = 25200;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                long long num = 1 , g = 0 , l = 1;
                bool ok = true;

                for(int k=i; k<=j; k++){
                    num *= nums[k];

                    if(num > LIMIT){ 
                        ok = false;
                        break;
                    }

                    g = gcd(g , (long long) nums[k]);
                    l = lcm(l , (long long) nums[k]);
                }

                if(ok && num == g * l) maxlen = max(maxlen , j - i + 1);
            }
        }

        return maxlen;
    }
};