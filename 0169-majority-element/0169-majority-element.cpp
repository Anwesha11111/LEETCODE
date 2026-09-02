class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n/2;
        int count=0,candidate=0;
        for (int num:nums){
            if(count==0)candidate=num;
            count+=(num==candidate)?1:-1;
            
            
            
        }
       return candidate;
    }
};