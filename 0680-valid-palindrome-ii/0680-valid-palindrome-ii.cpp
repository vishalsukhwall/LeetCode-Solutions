class Solution {
public:
    bool ispalidrome(string s , int st , int end){

        while(st < end){
            if(s[st] != s[end]){
                return false;
            }
            st++ , end--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        
        int st = 0 , end = n-1;
        while(st <= end){
            if(s[st] != s[end]){
                return ispalidrome(s , st+1 , end) || ispalidrome(s , st , end-1);
            }
            st++ , end--;
        }
        
        return true;
    }
};