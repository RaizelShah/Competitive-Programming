#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int s, n;
    cin >> s >> n;

    int x, y;
    vector<pair<int, int>> v;
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(),v.end());

    if (s <= v[0].first)
    {
        cout << "NO" << endl;
    }
    else
    {
        s = s + v[0].second;
        for (int i = 1; i < n ; i++)
        {
            if (s <= v[i].first)
            {
                flag = 0;
                break;
            }
            else
            {
                s+=v[i].second;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    // for(auto it:v)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
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