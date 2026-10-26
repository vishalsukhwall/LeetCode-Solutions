class Solution {
public:
    int countSeniors(vector<string>& s) {
        int n = s.size();
        int count = 0;

        for(string val : s){

            int age = (val[11] - '0') * 10 + val[12] - '0';

            if(age > 60){
                count++;
            }
        }

        return count;
    }
};