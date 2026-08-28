class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> freq(51,0);
        for (auto num : nums){
            freq[num]++;
         
        }
        
        if(k==1 ){
            int ans=-1;
            for (int x: nums){
                if(freq[x]==1)
                ans=max(ans,x);
            }
            return ans;
        }
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        int a =nums[0];
        int b=nums[n-1];
        bool ak=(freq[a]==1);
        bool bk=(freq[b]==1);
        if(ak&& bk)return max(a,b);
        if(ak) return a;
        if(bk) return b;
        return -1;
    }
};