class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        unordered_map<char , int> mp;

        int count = 0;
        for(int i=0; i<n; i++){
            if(mp.find(s[i]) == mp.end()){
                count++;
            }
            mp[s[i]] = i;
        }

        return count;
    }
};