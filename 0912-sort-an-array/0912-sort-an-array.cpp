class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        
        for (int i=n/2-1;i>=0;i--){
            heapify(nums,n,i);
        }
        for (int i=n-1;i>0;i--){
            swap(nums[0],nums[i]);
            heapify(nums,i,0);
        }
    return nums;}
    void heapify(vector<int>&num,int n,int i){
        int left=2*i+1;
        int right=2*i+2;
        int largest =i;
        if(left<n && num[left]>num[largest]  ){
            largest=left;
        }
        if (right<n &&num[right]>num[largest] ){
            largest=right;
        }
        if(i!=largest){
           swap(num[largest],num[i]);
           heapify(num,n,largest);
        }
        
    }
};