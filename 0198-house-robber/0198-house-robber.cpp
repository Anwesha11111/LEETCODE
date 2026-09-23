class Solution {
    public: int maxrob(int i,vector<int>&nums,vector<int> &dp){
        if(i<0)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int nas=max(nums[i]+maxrob(i-2,nums,dp),maxrob(i-1,nums,dp));
        return dp[i]=nas;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return maxrob(n-1,nums,dp);
    }
};