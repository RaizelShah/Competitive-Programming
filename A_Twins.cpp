#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    int sum1=0,sum2=0;
    int ctr=0;
    vector<int> val;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        val.push_back(k);
    }
    sort(val.begin(),val.end());
    sum1=val[0];sum2=val[val[n-1]];
    for(int i=1,j=val.size()-2;i==j;)
    {
        if(sum1<sum2)
        {
            sum1=sum1+val[i];
            i++;
        }
        else
        {
            
        }

    }
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