/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructTransformedArray(int* nums, int n, int* returnSize) {
    int* result = malloc(sizeof(int) * n);
    *returnSize = n;

    for (int i = 0; i < n; ++i) {
        if (nums[i] == 0) {
            result[i] = 0;
        } else {
            int step = nums[i] % n;
            int target = (i + step + n) % n;  // handles positive and negative
            result[i] = nums[target];
        }
    }
    return result;
}
