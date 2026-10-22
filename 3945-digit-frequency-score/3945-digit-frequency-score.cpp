class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int , int> mp;

        while(n > 0){
            int dig = n % 10;

            mp[dig]++;

            n = n / 10;
        }

        int sum = 0;
        for(int i=0; i<mp.size(); i++){
            sum += (mp[i] * i);
        }

        return sum;
    }
};