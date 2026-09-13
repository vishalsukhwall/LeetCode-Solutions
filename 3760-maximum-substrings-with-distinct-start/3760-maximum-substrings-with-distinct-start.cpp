class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        unordered_set<char> s1;

        int count = 0;
        for(int i=0; i<n; i++){
            if(s1.find(s[i]) == s1.end()){
                count++;
            }
            s1.insert(s[i]);
        }

        return count;
    }
};