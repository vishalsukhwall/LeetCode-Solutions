class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.size();
        
        int maxzero = 0 , maxone = 0;
        int countzero = 0 , countone = 0;
        int i = 0;
        while(i < n){
            int num = s[i] - '0';
            if(num == 0){
                countone = 0;
                countzero++;
                maxzero = max(maxzero , countzero);
            }
            else{
                countzero = 0;
                countone++;
                maxone = max(maxone , countone);
            }
            i++;
        }

        

        if(maxzero >= maxone){
            return false;
        }

        return true;
    }
};