#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i = 1;

    int ctr = 0;
    int sum = 0;
    while (sum < n)
    {
        i++;
        sum += (i*(i+1))/2;
        ctr++;
    }
    cout << ctr << endl;
}
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}