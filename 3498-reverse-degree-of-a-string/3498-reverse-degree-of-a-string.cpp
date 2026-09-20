class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();

        int sum = 0;
        vector<int> deg(26 , 0);

        int idx = 26;
        for(int i=0; i<26; i++){
            deg[i] = idx;
            idx--;
        }

        int a;
        for(int i=0; i<n; i++){

            a = s[i] - 'a';
            sum += deg[a] * (i+1);

        }

        return sum;
    }
};