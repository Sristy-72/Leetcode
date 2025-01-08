class Solution {
public:
vector<vector<string>>result;
bool isSafe(vector<string>&board, int row, int col){
    // checking for upwards
    for(int i=row;i>=0;i--){
       if( board[i][col]=='Q')
       return false;
    }
    // diagonally left-upwards
    for(int i=row,j=col;i>=0 && j>=0;i--, j--){
        if(board[i][j]=='Q')
        return false;
    }
    // diagonally right upwards
     for(int i =row,j=col;i>=0 && j<board.size();i--,j++){
        if(board[i][j]=='Q')
            return false;
     } 
     return true;
}

void solve(vector<string>&board, int row){
    if(row==board.size()){
        result.push_back(board);
        return;
    }
     for(int i = 0; i<board.size(); i++) {
            if(isSafe(board, row, i)) {
                board[row][i] = 'Q'; 
                solve(board, row+1);
                board[row][i] = '.';
            }
        }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n, string(n,'.'));
        solve(board, 0);
        return result;
    }
};