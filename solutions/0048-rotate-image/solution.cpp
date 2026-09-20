class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        for(int i =0; i< row; i++){
            for(int j = i; j< col; j++){
                if(i!=j){
                    int t = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = t;
                }
            }
        }
        for(int i = 0; i<row; i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};
