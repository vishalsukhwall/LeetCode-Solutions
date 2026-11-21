class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int five = 0 , ten = 0 , fifty = 0 , twenty = 0;

        for(int val : nums){
            bool balance = false;

            if(val == 5){
                five++;
                balance = true;
            }


            if(!balance){
                int a = val - 5;

                if(a == 5){
                    if(five > 0){
                        five--;
                        ten++;
                        // balance = true;
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
                        // balance = true;
                    }
                    else if(five >= 3){
                        five -= 3;
                        twenty++;
                        // balance = true;
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