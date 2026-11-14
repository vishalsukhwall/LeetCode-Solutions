class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n+1 , 0);
        int ans = 0 , t = 0;
        arr[0] = 1;

        for(auto val : nums){
            t += (1 & val);
            if(t - k >= 0) ans += arr[t-k];
            arr[t]++; 
        }

        return ans;
    }
};