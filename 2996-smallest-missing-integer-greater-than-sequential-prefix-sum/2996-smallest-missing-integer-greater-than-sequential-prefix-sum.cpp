class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int n=nums.size(),sum=nums[0],i=1;
     while(i<n &&nums[i]==nums[i-1]+1){
        sum+=nums[i];
        i++;
     }
     unordered_set <int> st(nums.begin(),nums.end());
     int x=sum;
     while(st.count(x)){
        x++;
     }
     return x;
    }
};