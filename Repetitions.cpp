#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 1, count = 1;

    for (long long i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;

        ans = max(ans, count);
    }

    cout << ans;
}