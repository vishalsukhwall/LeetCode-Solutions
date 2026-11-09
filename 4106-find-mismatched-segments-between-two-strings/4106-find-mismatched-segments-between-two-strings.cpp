class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int n = s1.size();
        int i = 0;

        while(i < n){
            if(s1[i] == s2[i]){
                i++;
            }
            else{
                int start = i;

                while(i < n && s1[i] != s2[i]){
                    i++;
                }

                ans.push_back({s1.substr(start , i-start) , s2.substr(start , i-start)});
            }
        }

        return ans;
    }
};