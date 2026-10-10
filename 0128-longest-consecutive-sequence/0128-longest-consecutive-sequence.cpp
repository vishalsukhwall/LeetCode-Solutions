class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        unordered_set<int> mp(nums.begin() , nums.end());

        int maxlen = 0 , len = 0;

        for(int val : mp){
            if(mp.find(val-1) == mp.end()){
                int num = val;
                len = 1;

                while(mp.find(num+1) != mp.end()){
                    len++;
                    num++;
                }

                maxlen = max(maxlen , len);
            }
        }
        return maxlen;
    }
};