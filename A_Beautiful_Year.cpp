#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;

    n++;

    string s= to_string(n);
    while(true)
    {
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])
        {
            break;
        }
        else
        {
            s="";
            n++;
            s=to_string(n);
        }
    }
    cout<<s;
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