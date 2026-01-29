int minOperations(int* nums, int numsSize, int k) {
    int tot=0;
   for (int i=0;i<numsSize;i++){
      tot+=nums[i];
   } 
   return tot%k;
}