#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt = 1;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cnt++;
            sum += arr[i];
        }
    }
    if (cnt == n)
    {
        cout << sum + arr[0] << endl;
        cnt=1;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]-1)
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<< *max_element(arr, arr+n)<<endl;
        cnt=1;
        return;
    }

    cout<<arr[n-1]*2<<endl;
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