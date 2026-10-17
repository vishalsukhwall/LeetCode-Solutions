class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        unordered_map<char , int> mp;
        vector<bool> res(n , true);
        int count = 0;

        for(char val : allowed){
            mp[val]++;
        }

        for(int i=0; i<n; i++){
            string s = words[i];

            for(int j=0; j<s.size(); j++){
                if(mp.count(s[j]) == 0){
                    res[i] = false;
                }
            }

            if(res[i]){
                count++;
            }
        }

        return count;
    }
};