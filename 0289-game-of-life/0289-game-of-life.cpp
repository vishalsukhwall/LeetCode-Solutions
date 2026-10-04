class Solution {
public:
    bool checklive(vector<vector<int>>& board , int i , int j){
        int row = board.size();
        int col = board[0].size();

        int count = 0;
        if(j-1 >= 0 && board[i][j-1] == 1){
            count++;
        }

        if(j+1 < col && board[i][j+1] == 1){
            count++;
        }

        if(i-1 >= 0 && board[i-1][j] == 1){
            count++;
        }

        if(i+1 < row && board[i+1][j] == 1){
            count++;
        }

        if(i-1 >= 0 && j-1 >= 0 && board[i-1][j-1] == 1){
            count++;
        }

        if(i-1 >= 0 && j+1 < col && board[i-1][j+1] == 1){
            count++;
        }

        if(i+1 < row && j+1 < col && board[i+1][j+1] == 1){
            count++;
        }

        if(i+1 < row && j-1 >= 0 && board[i+1][j-1] == 1){
            count++;
        }

        if(count == 2 || count == 3){
            return true;
        }

        return false;
    }

    bool checkdie(vector<vector<int>>& board , int i , int j){
        int row = board.size();
        int col = board[0].size();

        int count = 0;

        if(j-1 >= 0 && board[i][j-1] == 1){
            count++;
        }
        
        if(j+1 < col && board[i][j+1] == 1){
            count++;
        }

        if(i-1 >= 0 && board[i-1][j] == 1){
            count++;
        }

        if(i+1 < row && board[i+1][j] == 1){
            count++;
        }

        if(i-1 >= 0 && j-1 >= 0 && board[i-1][j-1] == 1){
            count++;
        }

        if(i-1 >= 0 && j+1 < col && board[i-1][j+1] == 1){
            count++;
        }

        if(i+1 < row && j+1 < col && board[i+1][j+1] == 1){
            count++;
        }

        if(i+1 < row && j-1 >= 0 && board[i+1][j-1] == 1){
            count++;
        }

        if(count == 3){
            return true;
        }
        
        return false;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();

        vector<vector<int>> nextBoard = board;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(board[i][j] == 1){
                    if(checklive(board , i , j)){
                        nextBoard[i][j] = 1;
                    }
                    else{
                        nextBoard[i][j] = 0;
                    }
                }
                else{
                    if(checkdie(board , i , j)){
                        nextBoard[i][j] = 1;
                    }
                    else{
                        nextBoard[i][j] = 0;
                    }
                }
            }
        }
        board = nextBoard;
    }
};