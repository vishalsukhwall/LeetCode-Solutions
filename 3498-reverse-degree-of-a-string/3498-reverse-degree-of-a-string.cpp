class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();

        int sum = 0;

        int a;
        for(int i=0; i<n; i++){

            a = 26 - (s[i] - 'a');
            sum += a * (i+1);

        }

        return sum;
    }
};