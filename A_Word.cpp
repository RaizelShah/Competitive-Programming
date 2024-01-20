#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int ctr1=0,ctr2=0;

    for(int i=0;i<s.length();i++)
    {
        if(toascii(s[i])>=65 && toascii(s[i])<=90)
        {
            ctr1++;
        }
        else
        {
            ctr2++;
        }
    }
    
    if(ctr1<=ctr2)
    {
        for(int i=0;i<s.length();i++)
        s[i]=tolower(s[i]);
    }
    else
    {
        for(int i=0;i<s.length();i++)
        s[i]=toupper(s[i]);
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