#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];

            if (seen.count(need)) {
                return {seen[need], i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = sol.twoSum(nums, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]\n";
    // Expected output: [0, 1]

    return 0;
}
#endif
