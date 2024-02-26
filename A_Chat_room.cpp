#include <bits/stdc++.h>
#include <regex>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    string req="hello";
    int k=0,c=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==req[k])
        {
            k++;
            c++;
        }
    }

    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}