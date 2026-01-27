bool kLengthApart(int* nums, int numsSize, int k) {

   for (int i=0;i<numsSize;i++){
    if(nums[i]==1){
        for (int j=1;j<=k && (i+j)<numsSize;j++){
            if(nums[i+j]==1){
                return false;
            }
        }
    }
    
   }
    return true;
}