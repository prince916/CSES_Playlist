#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int from, int to, int aux)
{
    if(n==1)
    {
        return;
    }
    hanoi(n-1, from, aux, to);
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
    hanoi(n-1, aux, to, from);
}


int main()
{
    int n;
    cin >> n;

    hanoi(n,1,2,3);
    return 0;
}