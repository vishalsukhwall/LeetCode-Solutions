class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();

        vector<int> alpha(26 , 1);

        for(int i=0; i<n; i++){
            alpha[s[i] - 'a']--;
        }

        for(int val : alpha){
            if(val == 1){
                return false;
            }
        }

        return true;
    }
};