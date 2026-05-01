#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;        // number of jumps taken
        int currentEnd = 0;   // farthest we can reach with current number of jumps
        int farthest = 0;     // farthest we can reach overall

        // we stop at n-2 because once we reach n-1, we don't need another jump
        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]);

            // when we reach the end of the current range
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
    }
};
