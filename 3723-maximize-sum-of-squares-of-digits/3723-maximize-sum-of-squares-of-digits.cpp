class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum > 9 * num){
            return "";
        }

        int k = sum / 9;
        int r = sum % 9;

        string ans(k , '9');

        if(r > 0){
            ans += char('0' + r);
        }

        ans.append(num - ans.size() , '0');
        return ans;
    }
};