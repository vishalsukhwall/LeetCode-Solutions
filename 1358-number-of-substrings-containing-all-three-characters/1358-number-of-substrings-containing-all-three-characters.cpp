class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char , int> mp;

        int l = 0 , count = 0;
        for(int r=0; r<n; r++){
            mp[s[r]]++;

            while(mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0){
                count += n - r;
                mp[s[l]]--;
                l++;
            }
        }

        return count;
    }
};