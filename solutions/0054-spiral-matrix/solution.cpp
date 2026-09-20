class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int top = 0, bottom = m-1, left = 0, right = n-1;
        while(ans.size()<m*n){
            for (int j = left; j <= right && ans.size() < m*n; j++)
                ans.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= bottom && ans.size() < m*n; i++)
                ans.push_back(matrix[i][right]);
            right--;

            for (int j = right; j >= left && ans.size() < m*n; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;

            for (int i = bottom; i >= top && ans.size() < m*n; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
