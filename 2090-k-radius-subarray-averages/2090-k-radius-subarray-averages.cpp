class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n , -1);

        if(k == 0){
            return nums;
        }
        
        if(n < 2*k+1){
            return ans;
        }

        int left = 0;
        int right = 2 * k;
        int i = k;
        int count = 2 * k + 1;
        long long window = 0;

        for(int i=left; i<=right; i++){
            window += nums[i];
        }

        ans[i] = window/count;
        i++;

        right++;

        while(right < n){
            int come = nums[right];
            int gone = nums[left];

            window = window + come - gone;
            ans[i] = window / count;

            i++;
            left++ , right++;
        }

        return ans;
    }
};