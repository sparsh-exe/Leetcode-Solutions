class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i = 0, j = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        int dir = 1;
        while(ans.size()!=m*n){
            ans.push_back(mat[i][j]);
            if(dir == 1){
                if(j == n-1){
                    i++;
                    dir = -1;
                }
                else if(i == 0){
                    j++;
                    dir = -1;
                }
                else{
                    i--;
                    j++;
                }
            }
            else{
                if(i == m-1){
                    j++;
                    dir = 1;
                }
                else if(j == 0){
                    i++;
                    dir = 1;
                }
                else{
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};
