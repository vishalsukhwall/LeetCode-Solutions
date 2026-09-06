class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char , int>mp;

        // for(char ch : s) mp[ch]++;
        // for(char ch : t) mp[ch]--;

        // for(auto pair : mp){
        //     if(pair.second < 0){
        //         return pair.first;
        //     }
        // }

        // return ' ';
        int sum_t = 0;
        int sum_s = 0; 

        for(char c : s) sum_s += c;
        for(char c : t) sum_t += c;

        return char(sum_t - sum_s);
    }
};