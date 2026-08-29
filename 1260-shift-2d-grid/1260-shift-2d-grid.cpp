class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector <int>mat;
        for (int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mat.push_back(grid[i][j]);
            }
        }
        vector<int> shifted(m*n) ;
        for(int i=0;i<(m*n);i++){
            shifted[(i+k)%(m*n)]=mat[i];
        }
vector<vector<int>>result(m,vector<int>(n));
        for (int i=0;i<(m*n);i++){
            
                result[i/n][i%n]=shifted[i];
            }
            return result;
        }
        
    
};