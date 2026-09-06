class Solution {
public:
    char findTheDifference(string s, string t) {
        int m = s.size();
        int n = t.size();

        unordered_map<char , int>mp;

        for(char ch : s) mp[ch]++;
        for(char ch : t) mp[ch]--;

        for(auto pair : mp){
            if(pair.second < 0){
                return pair.first;
            }
        }

        return ' ';
    }
};