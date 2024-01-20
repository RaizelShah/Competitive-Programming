#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    string s;

    int ctr=0;
    cin>>n;

    s = to_string(n);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        ctr++;
    }

    if(ctr==4 || ctr==7)
    cout<<"YES";
    else
    cout<<"NO";

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