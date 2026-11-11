class Solution {
public:
    int minPartitions(string n) {
        int maxval = 0;

        for(char val : n){
            maxval = max(maxval , val - '0');
        }

        return maxval;
    }
};