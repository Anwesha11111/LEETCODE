class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans=arr;
       unordered_map<int,int> res;
       sort(ans.begin(),ans.end());
       ans.erase(unique(ans.begin(),ans.end()),ans.end());
       for(int i=0;i<ans.size();i++){
         res[ans[i]]=i+1;
       } 
       for(int i=0;i<arr.size();i++){
        arr[i]=res[arr[i]];
       }
       return arr;
    }
};