class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
        for(int i=0; i<9; i++){
            if(i != col && board[row][i] == dig){
                return false;
            }

            if(i != row && (board[i][col] == dig)){
                return false;
            }
        }

        int srow = (row/3) *3;
        int scol = (col/3) *3;

        for(int i = srow; i<=srow+2; i++){
            for(int j = scol; j<=scol+2; j++){
                if((i != row || j != col) && board[i][j] == dig){
                    return false;
                }
            }
        }
    return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i =0; i<9; i++){
            for(int j=0; j<9; j++){

                if(board[i][j] != '.'){
                    char digit = board[i][j];
                

                if(!isSafe(board, i , j , digit)){
                    return false;
                    }
                }
            }
        }
        return true;
    }
};