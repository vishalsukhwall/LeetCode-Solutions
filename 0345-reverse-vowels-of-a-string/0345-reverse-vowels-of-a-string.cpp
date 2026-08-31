class Solution {
public:
    bool isValid(char ch){
        char vowel = tolower(ch);
        
        return vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u';
    }
    string reverseVowels(string s) {
        int n = s.size();

        int i = 0, j = n - 1;
        while(i < j){
            if(!isValid(s[i])){
                i++;
            }
            else if(!isValid(s[j])){
                j--;
            }
            else{
                swap(s[i] , s[j]);
                i++ , j--;
            }
        }
        return s;
    }
};