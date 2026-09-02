class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0],maxs=nums[0];
        for (int i=1;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxs=max(maxs,currsum);
        }
        return maxs;
    }
};