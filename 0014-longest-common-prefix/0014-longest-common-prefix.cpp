class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        sort(s.begin() , s.end());

        int i = 0;
        string first = s[0] , last = s[n-1];

        int minlen = min(first.size() , last.size());
        string ans = "";

        for(int i=0; i<minlen; i++){
            if(first[i] != last[i]){
                return ans;
            }

            ans += first[i];
        }

        return ans;
    }
};