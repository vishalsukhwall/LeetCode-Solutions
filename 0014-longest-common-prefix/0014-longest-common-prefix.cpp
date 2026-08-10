class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return "";

        sort(strs.begin() , strs.end());

        string first = strs[0];
        string last = strs[n-1];

        string result = "";
        int minLength = min(first.length() , last.length());

        for(int i=0; i<minLength; i++){
            if(first[i] != last[i]){
                break;
            }
            result += first[i];
        }
        return result;
    }
};