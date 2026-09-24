class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(n < k) return 0;
        if(k <= 1) return n;

        unordered_map<char , int> mp;
        for(char val : s){
            mp[val]++;
        }

        for(int i=0; i<n; i++){
            if(mp[s[i]] < k){

                int left = longestSubstring(s.substr(0,i) , k);
                int right = longestSubstring(s.substr(i+1) , k);

                return max(left , right);
            }
        }
        return n;
    }
};