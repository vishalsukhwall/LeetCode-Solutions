class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(num1.size() + num2.size() , 0);

        if(num1 == "0" || num2 == "0") return "0";

        for(int i=num1.size()-1; i>=0; i--){
            for(int j=num2.size()-1; j>=0; j--){
                int mult = (num1[i] - '0') * (num2[j] - '0');

                int sum = res[i+j+1] + mult;

                res[i+j+1] = sum % 10;
                res[i+j] += sum / 10;
            }
        }

        string ans = "";

        for(int val : res){
            if(!(ans.empty() && val == 0)){
                ans += (val + '0');
            }
        }

        return ans;
    }
};