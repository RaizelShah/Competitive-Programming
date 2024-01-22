#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    int sum=0;
    int sum2=0;
    int ctr = 1;
    vector<int> val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        val.push_back(k);
    }
    sort(val.begin(), val.end());

    for(int i=0;i<val.size();i++)
    {
        sum=sum+val[i];
    }

    sum=sum/2;
    
    for(int j=val.size()-1;j>=0;j--)
    {
        sum2=sum2+val[j];
        if(sum2>sum)
        break;
        ctr++;
    }
    
    cout << ctr << endl;
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