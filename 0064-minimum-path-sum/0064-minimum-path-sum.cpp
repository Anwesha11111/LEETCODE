class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=1;i<m;i++) grid[i][0]+=grid[i-1][0];
        for(int j=1;j<n;j++)grid[0][j]+=grid[0][j-1];
        for(int k=1;k<m;k++){
            for(int l=1;l<n;l++){
            grid[k][l]+=min(grid[k-1][l],grid[k][l-1]);
        }
        }
        return grid[m-1][n-1];
    }
};