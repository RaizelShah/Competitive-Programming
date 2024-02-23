#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>x(n);
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        a=abs(a);
        x[i] = a;
    }
    vector<pair<int,int>>p;
    for(int i =0;i<n;i++)
    {
        p.push_back({x[i],a[i]});
    }
    sort(p.begin(),p.end());
    int x1 = p[n-1].first;
    int sum=0;
    int mx,mn;
    for(auto it : p )
    {
        //cout<<it.first<<" "<<it.second<<endl;
        sum+=it.first;
        mx=max(mx,it.second);
        mn=min(mn,it.first);
    }
    int y = k*x1;
    if(k*x1<mn)
    {
        cout<<"NO"<<endl;
    }
    else if (k*x1<mx)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    //cout<<"K: "<<k<<" "<<"X1: "<<x1<<" "<<"sum: "<<sum<<" "<<endl;
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
