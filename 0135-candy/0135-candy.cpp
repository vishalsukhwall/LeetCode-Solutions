class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        vector<int> bag(n , 0);
        for(int i = 0; i < n; i++){
            bag[i] = 1;
        }

        for(int i = 1; i < n; i++){
            if(ratings[i] > ratings[i-1]){
                bag[i] = bag[i-1] + 1;
            }
        }

        for(int i = n-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1]){
                bag[i] = max(bag[i] , bag[i+1] + 1);
            }
        }

        int total = 0;
        for(int val : bag){
            total += val;
        }

        return total;
    }
};