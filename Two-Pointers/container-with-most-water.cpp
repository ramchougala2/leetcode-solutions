#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = (int)height.size() - 1;
        int best = 0;

        while (left < right) {
            int width = right - left;
            int current = min(height[left], height[right]) * width;
            best = max(best, current);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return best;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << sol.maxArea(height) << '\n';
    // Expected output: 49

    return 0;
}
#endif
