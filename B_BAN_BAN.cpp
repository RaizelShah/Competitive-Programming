#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int s;
    cin >> s;

    cout << s / 2 + s % 2 << endl;

    int l = 1, r = 3 * s;

    while (l<r)
    {
        cout<<l<<" "<<r<<endl;
        l+=3;
        r-=3;
    }
    
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