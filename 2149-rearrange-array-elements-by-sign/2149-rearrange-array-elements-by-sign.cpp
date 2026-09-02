class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>num1,num2,num3(0,n);
                for(int num:nums){
            if(num<0){
                num1.push_back(num);
            }
            else{
                num2.push_back(num);
            }
        }
      
        for (int i=0;i<(n/2);i++){
     
        num3.push_back(num2[i]);
        num3.push_back(num1[i]);
        
        
    }
    
    return num3;}
};