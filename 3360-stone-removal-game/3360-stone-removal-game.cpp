class Solution {
public:
    bool canAliceWin(int n) {
        int count = 11;

        if(n < 10){
            return false;
        }

        while(true){
            count--;

            if(n - count < 0){
                if(count % 2 == 0){
                    return false;
                }
                else{
                    return true;
                }
            }
            else if(n - count == 0){
                if(count % 2 == 0){
                    return true;
                }
                else{
                    return false;
                }
            }

            n = n - count;
        }
        return false;
    }
};