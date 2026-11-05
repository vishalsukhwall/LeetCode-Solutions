class Solution {
public:
    bool isvalid(int n , vector<int> arr2 , int d){

        for(int val : arr2){
            if(abs(n - val) <= d) return false;
        }

        return true;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for(int val : arr1){
            if(isvalid(val , arr2 , d)) count++;
        }

        return count;
    }
};