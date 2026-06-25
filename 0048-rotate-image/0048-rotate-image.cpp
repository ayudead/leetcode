class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        int j = 0;
        for(int i = 0; i< n; i++){
            for(j =i+1; j< n; j++){
                swap(mat[i][j] , mat[j][i]);
            }
        }

        for(j = 0; j< n; j++){
            int left = 0;
            int right = n-1;
            while(left < right){
                swap(mat[j][left], mat[j][right]);
                left++;
                right--;
            }
        }
    }
};