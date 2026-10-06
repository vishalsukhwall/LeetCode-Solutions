class Solution {
public:
    int isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return 1;
        }
        return 0;
    }

    int maxVowels(string s, int k) {
        int n = s.size();

        int maxlen = 0 , len = 0;
        for(int i=0; i<k; i++){
            if(isvowel(s[i])){
                len++;
            }
        }

        maxlen = len;

        for(int i=k; i<n; i++){
            len = len - isvowel(s[i-k]) + isvowel(s[i]);
            maxlen = max(len , maxlen);
        }

        return maxlen;
    }
};