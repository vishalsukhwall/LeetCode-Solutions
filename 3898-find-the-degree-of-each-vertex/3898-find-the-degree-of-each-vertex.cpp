class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> ans(n);
        
        for (int i = 0; i < n; i++) {
            ans[i] = std::count(matrix[i].begin(), matrix[i].end(), 1);
        }
        
        return ans;
    }
};