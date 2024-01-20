#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int ctr=0;

    while(a<=b)
    {
        a=a*3;
        b=b*2;
        ctr++;
    }

    cout<<ctr;
}
signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}