#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ex,en;
    int curr_p=0;
    vector<int> max;

    for(int i=0;i<n;i++)
    {
        cin>>ex>>en;
        curr_p=curr_p-ex+en;
        max.push_back(curr_p);
    }

    cout<<*max_element(max.begin(),max.end());
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