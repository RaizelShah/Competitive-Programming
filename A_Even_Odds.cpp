#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    
    if(k<=(n+1)/2)
    {
        cout<<(k*2)-1<<endl;
    }
    else
    {
        cout<<(k-(n+1)/2)*2<<endl;
    }
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