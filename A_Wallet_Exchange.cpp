#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int x = a+b;
    if(x%2==0)
    cout<<"Bob"<<endl;
    else
    cout<<"Alice"<<endl;
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