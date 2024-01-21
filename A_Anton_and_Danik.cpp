#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,ctr1=0,ctr2=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        ctr1++;
        else
        ctr2++;
    }

    if(ctr1==ctr2)
    cout<<"Friendship"<<endl;
    else if(ctr1>ctr2)
    cout<<"Anton"<<endl;
    else
    cout<<"Danik"<<endl;
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