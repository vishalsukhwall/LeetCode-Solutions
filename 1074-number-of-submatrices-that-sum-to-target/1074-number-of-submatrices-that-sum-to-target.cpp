class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
       
        int count = 0;
        for(int row = 0; row < m; row++){
            vector<int> rowSum(n , 0);

            for(int col = row; col < m; col++){

                for(int r = 0; r < n; r++){
                    rowSum[r] += matrix[r][col];
                }

            unordered_map<int,int> mp;
            mp[0] = 1;
            int currSum = 0;

            for(int i = 0; i < n; i++){
                currSum += rowSum[i];

                int x = currSum - k;

                if(mp.find(x) != mp.end()){
                    count += mp[x];
                }

                mp[currSum]++;
                }  
            } 
        }
        return count;
    }
};