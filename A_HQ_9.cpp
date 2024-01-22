#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int flag=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
signed main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}