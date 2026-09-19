class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin() , nums.end());

        if(n == 1){
            return 1;
        }

        int maxlen = 0;
        for(int num : s){
            int currnum , len;

            if(s.find(num-1) == s.end()){
                currnum = num;
                len = 1;
            }

            while(s.find(currnum + 1) != s.end()){
                currnum++;
                len++;
            }

           maxlen = max(len , maxlen);
        }
        return maxlen;
    }
};