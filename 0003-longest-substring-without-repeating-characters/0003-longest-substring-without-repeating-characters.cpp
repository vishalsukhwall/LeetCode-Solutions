class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int maxLen = 0;
        int left = 0;
        set<char> s;

        for(int right = 0; right<str.size(); right++){
            while(s.contains(str[right])){
                s.erase(str[left]);
                left++;
            }
            s.insert(str[right]);
            maxLen = max(maxLen , right - left + 1);
        }
        return maxLen;
    }
};