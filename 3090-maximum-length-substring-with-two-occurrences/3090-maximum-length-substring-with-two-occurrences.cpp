class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        unordered_map<char , int> mp;
        int ans = 0;

        while(j < n){
            mp[s[j]]++;

            while(mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans , j - i + 1);
            j++;
        }
        return ans;
    }
};