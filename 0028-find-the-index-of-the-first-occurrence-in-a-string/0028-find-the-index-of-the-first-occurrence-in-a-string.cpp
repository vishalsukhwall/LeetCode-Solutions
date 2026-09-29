class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int k = needle.size();

        if(n < k){
            return -1;
        }

        for(int i=0; i <= n - k; i++){
            if(haystack.substr(i , k) == needle){
                return i;
            }
        }
        return -1;
    }
};