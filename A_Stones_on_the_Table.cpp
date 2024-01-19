#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int ctr=0;

    if(n==1)
    cout<<ctr<<endl;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            ctr++;
        }

        cout<<ctr<<endl;
    }
}
signed main()
{
    solve();
}