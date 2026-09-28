#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array<int, 256> lastSeen;
        lastSeen.fill(-1);

        int left = 0;
        int best = 0;

        for (int right = 0; right < (int)s.size(); ++right) {
            unsigned char ch = static_cast<unsigned char>(s[right]);

            if (lastSeen[ch] >= left) {
                left = lastSeen[ch] + 1;
            }

            lastSeen[ch] = right;
            best = max(best, right - left + 1);
        }

        return best;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    string s = "abcabcbb";

    cout << sol.lengthOfLongestSubstring(s) << '\n';
    // Expected output: 3

    return 0;
}
#endif
