#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,l;
    cin>>n>>l;

    for(int i=0;i<l;i++)
    {
        if(n%10==0)
        {n=n/10;}
        else
        {
            n--;
        }
    }

    cout<<n<<endl;
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