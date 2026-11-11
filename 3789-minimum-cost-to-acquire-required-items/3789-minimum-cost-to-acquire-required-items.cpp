class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1 , c2 = cost2 , cb = costBoth;
        long long n1 = need1 , n2 = need2;

        long long total = 0;

        if(c1 + c2 <= cb){
            total = c1 * n1 + c2 * n2;
        }
        else{
            long long c3 = min(n1 , n2);
            total += cb * c3;

            n1 -= c3;
            n2 -= c3;

            if(n1 > 0){
                total += n1 * min(c1 , cb);
            }

            if(n2 > 0){
                total += n2 * min(c2 , cb);
            }
        }

        return total;
    }
};