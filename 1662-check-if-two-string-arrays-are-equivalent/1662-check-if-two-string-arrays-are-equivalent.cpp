class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        for(string val : word1){
            for(char ch : val){
                str1 += ch;
            }
        }

        for(string val : word2){
            for(char ch : val){
                str2 += ch;
            }
        }

        return str1 == str2;
    }
};