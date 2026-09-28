#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = (int)s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(static_cast<unsigned char>(s[left]))) {
                ++left;
            }

            while (left < right && !isalnum(static_cast<unsigned char>(s[right]))) {
                --right;
            }

            if (tolower(static_cast<unsigned char>(s[left])) !=
                tolower(static_cast<unsigned char>(s[right]))) {
                return false;
            }

            ++left;
            --right;
        }

        return true;
    }
};

#ifdef LOCAL_TEST
int main() {
    Solution sol;

    string s = "A man, a plan, a canal: Panama";

    cout << boolalpha << sol.isPalindrome(s) << '\n';
    // Expected output: true

    return 0;
}
#endif
