class Solution {
public:
    void solve (vector<string> &board, int col, vector<int>&left, vector<int>&ud, vector<int>&ld, int n, vector<vector<string>> &ans ){
        if (col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row<n; row++){
            if(left[row] == 0 && ud[n-1+col-row] == 0 && ld[row+col] ==0){
               board[row][col] = 'Q';
               left[row] = 1;
               ld[row+col] = 1;
               ud[n-1+col -row] = 1;
               solve(board ,col+1, left, ud, ld , n ,ans);
               board[row][col] = '.';
               left[row] = 0;
               ld[row+col] = 0;
               ud[n-1+col -row] = 0;
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board (n, string(n ,'.' ));
        vector<int> ud(2*n-1 , 0);
        vector<int> ld(2*n-1 , 0);
        vector<int> left(n , 0);
        vector<vector<string>>ans;
        solve(board,0 , left ,ud, ld,n, ans);
        return ans;
    }
};