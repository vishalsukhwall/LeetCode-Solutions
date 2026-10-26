class Solution {
public:
    int maxFreqSum(string s) {
        int count = 0;
        string vowel = "aeiou";
        unordered_map<char , int> mp;

        for(char val : vowel){
            mp[val]++;
        }

        unordered_map<char , int> vw;
        unordered_map<char , int> ct;

        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] == 1){
                vw[s[i]]++;
            }
            else{
                ct[s[i]]++;
            }
        }

        int maxval = 0 , maxcst = 0;

        for(int val : s){
            maxval = max(vw[val] , maxval);
            maxcst = max(ct[val] , maxcst);
        }

        return maxval + maxcst;
    }
};