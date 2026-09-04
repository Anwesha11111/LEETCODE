class Solution {
public:
int summ(vector<int> m){ int sum=0;
    for (int n=0;n<m.size();n++)
    sum+=m[n];
    return sum;
}
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<int>deg(n);
        for(int r=0;r<n;r++){
            deg[r]=summ(matrix[r]);
        }
        return deg;
    }
};