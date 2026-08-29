#include <bits/stdc++.h>
using namespace std;    
using ll = long long;

int main() 
{
    ll n;
    cin >> n;

    // Make two sets such that their sums are equal
    vector<ll> a;
    vector<ll> b;
    ll totalSum = n * (n + 1) / 2;

    if (totalSum % 2 != 0) 
    {
        cout << "NO" << endl;
    } 
    else 
    {
        cout << "YES" << endl;
        ll targetSum = totalSum / 2;
        for (ll i = n; i >= 1; i--) 
        {
            if (targetSum >= i) 
            {
                a.push_back(i);
                targetSum -= i;
            } 
            else 
            {
                b.push_back(i);
            }
        }

        cout << a.size() << endl;
        for (ll num : a) 
        {
            cout << num << " ";
        }
        cout << endl;

        cout << b.size() << endl;
        for (ll num : b) 
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}