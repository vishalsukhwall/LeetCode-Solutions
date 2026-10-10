class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin() , nums.end());

        if(n == 1){
            return 1;
        }

        int maxlen = 0;

        for(int val : s){
            int currnum , len;

            if(s.find(val-1) == s.end()){
                currnum = val;
                len = 1;

            while(s.find(currnum + 1) != s.end()){
                len++ , currnum++;
            }

            maxlen = max(maxlen , len);
            }
        }

        return maxlen;
    }
};