#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int first;
    int last;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            first=i;
            break;
        }
    }

    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='B')
        {
            last=i;
            break;
        }
    }

    cout<<last-first+1<<endl;
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