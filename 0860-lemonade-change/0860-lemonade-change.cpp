class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int five = 0 , ten = 0 , twenty = 0;

        for(int val : nums){
            if(val == 5){
                five++;
            }
            else{
                int a = val - 5;

                if(a == 5){
                    if(five > 0){
                        five--;
                        ten++;
                    }
                    else{
                        return false;
                    }
                }

                if(a == 15){
                    if(ten > 0 && five > 0){
                        ten--;
                        five--;
                        twenty++;
                    }
                    else if(five >= 3){
                        five -= 3;
                        twenty++;
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        return true;
    }
};