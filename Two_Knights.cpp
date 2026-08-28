#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    
        ll n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            ll tn = (ll)i * i * (i * i - 1) / 2;
            ll diff = (ll)4 * (i - 1) * (i - 2);
            cout << tn - diff << endl;
        }
    
    return 0;
}