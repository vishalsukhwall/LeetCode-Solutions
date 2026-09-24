class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        vector<string> ch = {"M", "CM", "D", "CD", "C","XC","L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        for(int i=0; i<13; i++){
            int time = num / val[i];

            while(time--){
                ans += ch[i];
            }

            num = num % val[i];
        }

        return ans;
    }
};