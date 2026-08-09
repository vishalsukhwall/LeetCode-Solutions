class Solution {
public:
    string intToRoman(int num) {
        vector<int> val{1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
        vector<string> sym{"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I" };

        string ans = "";
        for(int i=0; i<13; i++){
            if(num == 0){
                break;
            }
            
            int time = num / val[i];
            while(time > 0){
                ans += sym[i];
                time--;
            }

            num = num % val[i];
        }
        return ans;
    }
};