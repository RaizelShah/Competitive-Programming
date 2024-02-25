#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int a[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < n; i++)
        {
            sum += a[i][j];
        }
        if(sum!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        sum=0;
    }

    cout<<"YES"<<endl;
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