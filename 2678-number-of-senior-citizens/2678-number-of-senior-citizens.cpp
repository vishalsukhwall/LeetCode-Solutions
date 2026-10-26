class Solution {
public:
    int countSeniors(vector<string>& s) {
        int n = s.size();
        int count = 0;

        for(int i=0; i<n; i++){
            string st = s[i];

            int a = st[11] - '0';
            int b = st[12] - '0';

            int age = a*10 + b;

            if(age > 60){
                count++;
            }
        }

        return count;
    }
};