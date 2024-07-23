#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n==2)
    {
        cout << -1 << endl;
        return;
    }
    if(n%2!=0)
    {
        cout << -1 << endl;
        return;
    }
    cout << (n+6-1)/6 << " " << n/4 << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}