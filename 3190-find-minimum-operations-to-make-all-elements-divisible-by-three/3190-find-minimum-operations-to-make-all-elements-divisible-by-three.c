int minimumOperations(int* nums, int numsSize) {
    int d=0,p=0,count=0;
    for (int i=0;i<numsSize;i++){
        if(nums[i]%3!=0){
            d=nums[i]%3;
            p=3-(nums[i]%3);
            count+=(d<p?d:p);
        }
    }
   return count;
}