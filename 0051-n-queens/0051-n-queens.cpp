class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, vector<vector<string>>& ans){
        for(int i=0; i<col; i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }

        for(int i=0; i<row; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        for(int i=row-1 , j=col-1; i>=0 && j>=0; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        for(int i=row-1, j=col+1; i>=0 && j<board.size(); i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }

    void helper(vector<string>& board, int row, int n, vector<vector<string>>& ans){
        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int i=0; i<n; i++){
            if(isSafe(board , row , i, ans)){
                board[row][i] = 'Q';

                helper(board , row+1 , n , ans);

                board[row][i] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n , string(n , '.'));

        helper(board , 0 , n , ans);
        return ans;
    }
};