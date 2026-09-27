class Solution {
public:
    int mySqrt(int x) {
        int n = x;
        
        int st = 0 , end = n;
        while(st <= end){
            long long mid = st + (end - st)/2;
            long long sq = mid * mid;

            if(sq == x){
                return mid;
            }
            else if(sq > x){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return end;
    }
};