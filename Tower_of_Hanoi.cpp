#include <bits/stdc++.h>
using namespace std;

void solve(int n, int from, int to, int aux) {
    if (n == 0)
        return;

    // Move n-1 disks from 'from' to 'aux'
    solve(n - 1, from, aux, to);

    // Move the largest disk from 'from' to 'to'
    cout << from << " " << to << "\n";

    // Move n-1 disks from 'aux' to 'to'
    solve(n - 1, aux, to, from);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Minimum number of moves
    cout << (1LL << n) - 1 << "\n";

    solve(n, 1, 3, 2);

    return 0;
}