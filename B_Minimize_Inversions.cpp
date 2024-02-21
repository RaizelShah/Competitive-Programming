#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;

    map<int, int> mp;
    int arr1[n];
    int arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++)
    {
        mp.insert(pair<int,int>(arr1[i],arr2[i]));
    }

    for(auto it: mp)
    {
        cout<<it.first<<" ";
    }
    cout<<endl;
    for(auto it: mp)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
    
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