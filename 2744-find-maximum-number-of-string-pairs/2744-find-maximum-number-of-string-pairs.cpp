class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
        unordered_set<string> ss;
        int count = 0;

        for(string val : s){
            string rev = val;

            reverse(rev.begin() , rev.end());

            if(ss.count(rev)){
                count++;
            }
            else{
                ss.insert(val);
            }
        }
        return count;
    }
};