#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x;
    cin>>x;
    int ctr=0;
    
    while(x>0)
    {
        if(x>=5)
        {
            x-=5;ctr++;
        }
        if(x>=4)
        {
            x-=4;ctr++;
        }
        if(x>=3)
        {
            x-=3;ctr++;
        }
        if(x>=2)
        {
            x-=2;ctr++;
        }
        if(x>=1)
        {
            x-=1;ctr++;
        }
    }
    cout<<ctr<<endl;
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