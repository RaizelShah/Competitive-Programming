#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int r, c;
    cin >> r >> c;
    
    int diag=min(r,c);
    if(diag%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    cout<<"Akshat"<<endl;
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