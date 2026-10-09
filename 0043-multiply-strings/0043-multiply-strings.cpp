class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if(num1 == "0" || num2 == "0") return "0";

        vector<int> res(n+m , 0);

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){

                int mult = (num1[i] - '0') * (num2[j] - '0');

                int sum = mult + res[i+j+1];

                res[i+j+1] = sum % 10;

                res[i+j] += sum / 10;
            }
        }

        string ans = "";
        for(int val : res){
            if(!(ans.empty() && val == 0)){
                ans.push_back(val + '0');
            }
        }

        return ans.empty() ? "0" : ans;
    }
};