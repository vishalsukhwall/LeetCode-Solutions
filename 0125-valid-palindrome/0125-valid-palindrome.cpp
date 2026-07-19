class Solution {
public:
    bool alphanumeric(char ch){
        if(ch >= '0' && ch <= '9') return true;
        else if(ch >= 'a' && ch <= 'z') return true;
        else if(ch >= 'A' && ch <= 'Z') return true;
        else return false;
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length()-1;
        while(st < end){
            if(!alphanumeric(s[st])){
                st++;
                continue;
            }

            if(!alphanumeric(s[end])){
                end--;
                continue;
            }
        
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++, end--;
        }
        return true;
    }
};