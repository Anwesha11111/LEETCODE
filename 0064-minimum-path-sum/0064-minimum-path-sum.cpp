class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>cur(n,0);
        cur[0]=grid[0][0];
        for(int j=1;j<n;j++)cur[j]=cur[j-1]+grid[0][j];
       for(int i=1;i<m;i++){
       cur[0]+=grid[i][0];
       for(int j=1;j<n;j++){
        cur[j]=grid[i][j]+min(cur[j],cur[j-1]);
       }
       }
        return cur[n-1];
    }
};