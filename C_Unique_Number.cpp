#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x;
    cin >> x;

    vector<int> v;

    int sum=0,last=9;

    while(sum<x && last>0)
    {
        v.push_back(min(x-sum,last));
        sum+=last;
        last--;
    }

    if(x>sum)
    {
        cout<<-1<<endl;
    }
    else
    {
        reverse(v.begin(),v.end());

        for(auto it:v)
        cout<<it;
        cout<<endl;
    }
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