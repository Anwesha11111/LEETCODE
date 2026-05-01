#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> used;

    void backtrack(vector<int>& nums) {
        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;     // skip already used
            path.push_back(nums[i]);   // choose
            used[i] = true;
            backtrack(nums);           // recurse
            used[i] = false;           // undo
            path.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used = vector<bool>(nums.size(), false);
        backtrack(nums);
        return result;
    }
};
