class Solution {
public:
    int lengthOfLongestSubstring(string sb) {
        int n = sb.size();
        int maxlen = 0;
        int l = 0;
        unordered_map<char , int> mp;

        for(int r=0; r<n; r++){
            char c = sb[r];
            mp[c] = mp[c] + 1;

            while(mp[c] > 1){
                char lch = sb[l];
                mp[lch] = mp[lch] - 1;
                l++;
            }

            maxlen = max(maxlen , r-l+1);
        }

        return maxlen;
    }
};