class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     unordered_set<int> st(nums.begin(),nums.end());
     int m=k;
     while(true){
        if(st.find(m)==st.end())
        return m;
        m+=k;
     }
       


    
}

};