class Solution {
public:
    int lengthOfLongestSubstring(string sb) {
        int n = sb.size();
        set<char> s;
        int maxlen = 0;

        int l = 0;
        for(int r=0; r<n; r++){
            while(s.contains(sb[r])){
                s.erase(sb[l]);
                l++;
            }
            s.insert(sb[r]);
            maxlen = max(maxlen , r-l+1);
        }

        return maxlen;
    }
};