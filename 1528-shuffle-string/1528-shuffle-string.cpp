class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        vector<char> str(n , 'a');

        for(int i=0; i<n; i++){

            str[indices[i]] = s[i];
        }

        string ans = "";
        for(char val : str){
            ans += val;
        }

        return ans;
    }
};