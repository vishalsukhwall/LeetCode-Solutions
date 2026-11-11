class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long c1 = cost1 , c2 = cost2 , cb = costBoth;
        long long n1 = need1 , n2 = need2;

        long long ct = (c1 * n1) + (c2 * n2);
        long long cn = cb * max(n1 , n2);
        long long c1n = c1 * abs(n1 - n2) + cb * n2;
        long long c2n = c2 * abs(n1 - n2) + cb * n1;

        return min(min(c1n , c2n) , min(ct , cn));
    }
};