#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ctr1=0;
    int ctr0=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            ctr1++;
        }
        else
        {
            ctr0++;
        }
    }

    if(min(ctr0,ctr1)%2==0)
    cout<<"NET"<<endl;
    else
    cout<<"DA"<<endl;
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