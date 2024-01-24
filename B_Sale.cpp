#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int m,n,k;
    cin>>m>>n;
    int sum=0;

    vector<int> v;
    for(int i=0;i<m;i++)
    {
        cin>>k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        sum=sum+abs(v[i]);
        
    }
    
    cout<<sum<<endl;
    
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