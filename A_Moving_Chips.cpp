#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int first,last;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            first=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==1)
        {
            last=i;
            break;
        }
    }
    int ctr=0;

    for(int i=first;i<=last;i++)
    {
        if(arr[i]==0)
        ctr++;
    }

    cout<<ctr<<endl;
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