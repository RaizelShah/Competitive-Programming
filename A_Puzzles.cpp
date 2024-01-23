#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> puz;
    int k, diff = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        puz.push_back(k);
    }

    sort(puz.begin(),puz.end());
    int least=puz[n-1]-puz[0];

    for(int i=1;i<=m-n;++i)
    {
        if(puz[i+n-1]-puz[i]<least)
        {
            least=puz[i+n-1]-puz[i];
        }
    }
    cout<<least<<endl;
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