class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;

        for(int i=0; i<n; i++){
            string s = words[i];
            bool ischar = false;

            for(int j=0; j<s.size(); j++){
                if(s[j] == x){
                    ischar = true;
                }
            }
            
            if(ischar){
                ans.push_back(i);
            }
        }
        return ans;
    }
};