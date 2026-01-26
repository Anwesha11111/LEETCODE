int minDeletionSize(char **strs, int n) {
    if (n <= 1) return 0;  // Edge case
    
    int m = strlen(strs[0]);
    int ans = 0;
    
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i++) {
            if (strs[i][j] < strs[i-1][j]) {  
                ans++;
                break;
            }
        }
    }
    return ans;
}
