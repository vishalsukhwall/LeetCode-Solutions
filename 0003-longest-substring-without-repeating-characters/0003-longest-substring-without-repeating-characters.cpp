class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int len = 0 , maxlen = 0;

        vector<int> arr(256 , -1);
        int l = 0 , r = 0;

        while(r < n){
            if(arr[s[r]] != -1){
                if(arr[s[r]] >= l){
                    l = arr[s[r]] + 1;
                }
            }
            len = r - l + 1;
            maxlen = max(maxlen , len);
            arr[s[r]] = r;
            r++;
        }

        return maxlen;
    }
};