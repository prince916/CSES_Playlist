#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long m = max(y, x);
        long long ans;

        if (m % 2 == 1) {
            // m is odd
            if (y == m) {
                ans = (m - 1) * (m - 1) + x;
            } else {
                ans = m * m - y + 1;
            }
        } else {
            // m is even
            if (x == m) {
                ans = (m - 1) * (m - 1) + y;
            } else {
                ans = m * m - x + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}