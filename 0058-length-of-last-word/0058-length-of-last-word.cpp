class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;

        int count = 0;

        while(i >= 0 && s[i] == ' '){
            i--;
        }

        while(i >=0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;

        // int n = s.size();
        // int count = 0;

        // for(int i=n-1; i>=0; i--){
        //     if(s[i] != ' '){
        //         count++;
        //     }
        //     else if(count > 0){
        //         break;
        //     }
        // }
        // return count;
    }
};