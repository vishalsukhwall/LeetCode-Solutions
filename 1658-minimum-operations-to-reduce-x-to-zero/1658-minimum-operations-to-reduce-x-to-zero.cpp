class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // int n = nums.size();
        // int totalsum = accumulate(nums.begin() , nums.end() , 0);
        // int target = totalsum - x;

        // int left = 0 , longest = -1;
        // int sum = 0;

        // for(int right = 0; right < n; right++){
        //     sum += nums[right];

        //     while(left <= right && sum > target){
        //         sum -= nums[left++];
        //     }

        //     if(sum == target){
        //         longest = max(longest , right - left +1);
        //     }
        // }

        // return longest == -1 ? -1 : n - longest;

        int n = nums.size();
        unordered_map<int , int> mp;
        mp[0] = 0;

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];

            if(sum > x) break;
            mp[sum] = i+1;
        }

        int ans = INT_MAX;
        
        if(mp.count(x)){
            ans = mp[x];
        }

        int rightsum = 0;
        for(int i=n-1; i>=0; i--){
            rightsum += nums[i];

            if(rightsum > x) break;

            int rightidx = n - i;
            int leftsum = x - rightsum;

            if(mp.count(leftsum)){
                int leftidx = mp[leftsum];

                if(leftidx + rightidx <= n){
                    ans = min(ans , rightidx +  leftidx);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};