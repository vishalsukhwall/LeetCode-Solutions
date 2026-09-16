class Solution {
public:
    bool isvalid(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return true;
        }

        if(ch >= '0' && ch <= '9'){
            return true;
        }

        if(ch >= 'A' && ch <= 'Z'){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.size();

        int i = 0 , j = n-1;
        while(i <= j){
            if(!isvalid(s[i])){
                i++;
            }
            else if(!isvalid(s[j])){
                j--;
            }
            else {
                if(tolower(s[i]) != tolower(s[j])){
                return false;
                }
            i++ , j--;
            }
        }
        return true;
    }
};