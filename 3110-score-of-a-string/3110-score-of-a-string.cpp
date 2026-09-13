class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();

        int totalSum = 0;
        int i = 0;
        while(i+1 < n){
            totalSum += abs(s[i] - s[i+1]);
            i++;
        }
        return totalSum;
    }
};