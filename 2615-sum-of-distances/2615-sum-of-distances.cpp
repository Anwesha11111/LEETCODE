class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n, 0);
        unordered_map<int, vector<int>> pos;

        // Collect indices for each value
        for (int i = 0; i < n; i++) {
            pos[nums[i]].push_back(i);
        }

        // Process each group
        for (auto &p : pos) {
            auto &indices = p.second;
            int m = indices.size();
            vector<long long> prefix(m + 1, 0);

            // Build prefix sums
            for (int i = 0; i < m; i++) {
                prefix[i + 1] = prefix[i] + indices[i];
            }

            // Compute distances
            for (int i = 0; i < m; i++) {
                int idx = indices[i];
                long long left = (long long)i * idx - prefix[i];
                long long right = (prefix[m] - prefix[i + 1]) - (long long)(m - i - 1) * idx;
                ans[idx] = left + right;
            }
        }

        return ans;
    }
};
