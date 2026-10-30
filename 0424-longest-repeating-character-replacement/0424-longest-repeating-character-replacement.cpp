class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char , int> mp;

        int maxlen = 0 , maxfreq = 0;
        int l = 0 , r = 0;

        while(r < n){
            mp[s[r] - 'A']++;
            maxfreq = max(maxfreq , mp[s[r] - 'A']);

            if((r-l+1) - maxfreq > k){
                mp[s[l] - 'A']--;
                l++;
            }

            if((r-l+1) - maxfreq <= k){
                maxlen = max(maxlen , r-l+1);
            }
            r++;
        }

        return maxlen;
    }
};