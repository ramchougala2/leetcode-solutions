#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        array<int, 26> freq{};

        for (char c : s) {
            ++freq[c - 'a'];
        }

        for (char c : t) {
            --freq[c - 'a'];
        }

        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    string s = "anagram";
    string t = "nagaram";

    cout << boolalpha << sol.isAnagram(s, t) << '\n';
    // Expected output: true

    return 0;
}
#endif
