#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int flag = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            arr[i]+=1;
        }
    }

    for(int i=1;i<n;i++)
    {
        if(arr[i]%arr[i-1]==0)
        {
            arr[i]++;
        }
    }

    for (auto it : arr)
        cout << it << " ";
    cout << endl;
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