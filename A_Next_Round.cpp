#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    int a;
    int ctr=0;
    
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>a;
        arr[i]=a;
    }

    for(int i=0;i<x;i++)
    {
        if((arr[i]>=arr[y-1])&&(arr[i]>0))
        ctr++;
    }

    cout<<ctr<<endl;
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