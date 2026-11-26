class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char , int> mp;
        vector<string> bucket(n+1 , "");

        for(char val : s){
            mp[val]++;
        }

        for(auto it : mp){
            char ch = it.first;
            int frq = it.second;
            bucket[frq].append(frq , ch);
        }

        string ans = "";
        for(int i=n; i>=1; i--){
            ans += bucket[i];
        }

        return ans;
    }
};