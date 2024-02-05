#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ctr0=0;
    int ctr1=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        ctr1++;
        else
        ctr0++;
    }

    cout<<abs(ctr1-ctr0)<<endl;
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