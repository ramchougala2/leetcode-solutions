#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        array<int, 26> need{};
        array<int, 26> window{};

        for (char c : s1) {
            ++need[c - 'a'];
        }

        int k = s1.size();

        for (int i = 0; i < (int)s2.size(); ++i) {
            ++window[s2[i] - 'a'];

            if (i >= k) {
                --window[s2[i - k] - 'a'];
            }

            if (window == need) {
                return true;
            }
        }

        return false;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << boolalpha << sol.checkInclusion(s1, s2) << '\n';
    // Expected output: true

    return 0;
}
#endif
