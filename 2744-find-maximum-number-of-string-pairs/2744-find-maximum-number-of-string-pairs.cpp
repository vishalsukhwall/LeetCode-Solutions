class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
        unordered_set<string> seen;
        int count = 0;
        int n = s.size();

        for(int i=0; i<n; i++){
            string str = s[i];

            reverse(str.begin() , str.end());

            if(seen.count(str)){
                count++;
            }
            else{
                seen.insert(s[i]);
            }
        }
        return count;
    }
};