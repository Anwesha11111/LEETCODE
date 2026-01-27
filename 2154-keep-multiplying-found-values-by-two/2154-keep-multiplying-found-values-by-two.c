int findFinalValue(int* nums, int numsSize, int original) {
      bool present[2001] = {false};  
    for (int i = 0; i < numsSize; i++) {
        present[nums[i]] = true;
    }
    while (present[original]) {
        original *= 2;
    }
    return original;
}      
    
    
