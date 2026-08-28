#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, sum = 0;
    cin >> n;

    for (long long i = 1; i < n; i++) {
        cin >> x;
        sum += x;
    }

    cout << n * (n + 1) / 2 - sum;

    return 0;
}