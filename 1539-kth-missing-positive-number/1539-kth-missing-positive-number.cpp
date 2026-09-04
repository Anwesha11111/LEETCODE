class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    unordered_set<int> full;
    int missing=0,current=1,i=0;
   while(true){
    if(i<arr.size() && arr[i]==current)
    i++;
    else{
        missing++;
        if(missing==k) return current;
    }
    current++;
   }
   }

};