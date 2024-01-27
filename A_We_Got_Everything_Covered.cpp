#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;

    string s="abcdefghijklmnopqrstuvwxyz";

    while(n--)
    {
        for(int i=0;i<k;i++)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    
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