class Solution {
public:
    bool check(vector<int>& nums , int st , int end){
        int k = end - st + 1;
        int minval = INT_MAX , maxval = INT_MIN;
        unordered_set<int> s;

        for(int i=st; i<=end; i++){
            maxval = max(maxval , nums[i]);
            minval = min(minval , nums[i]);
            s.insert(nums[i]);
        }

        if(minval == maxval) return true;

        if((maxval - minval) % (k - 1) != 0) return false;

        int diff = (maxval - minval) / (k - 1);

        int curr = minval + diff;
        while(curr < maxval){
            if(s.find(curr) == s.end()){
                return false;
            }

            curr += diff;
        }

        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> ans(n , true);

        for(int i=0; i<n; i++){
            ans[i] = check(nums , l[i] , r[i]);
        }

        return ans;
    }
};