class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxval = INT_MIN;
        vector<bool> arr(n , false);

        for(int val : candies){
            maxval = max(maxval , val);
        }

        for(int i=0; i<n; i++){
            if(candies[i] + extraCandies >= maxval){
                arr[i] = true;
            }
        }
        return arr;
    }
};