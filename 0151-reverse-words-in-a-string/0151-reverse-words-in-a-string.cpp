class Solution {
public:
    string reverseWords(string s) {
        string word , ans = "";
        vector<string> str;

        stringstream ss(s);

        while(ss >> word){
            str.push_back(word);
        }

        int n = str.size();

        for(int i = n-1; i >= 0; i--){
            ans += str[i];

            if(i > 0) ans += " ";
        }
  
        return ans;
    }
};