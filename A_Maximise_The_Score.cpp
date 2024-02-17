#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[2 * n];

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << min(arr[0], arr[1]) << endl;
        return;
    }
    sort(arr, arr + 2 * n);

    int sum = 0;

    if (n % 2 == 0)
    {
        for (int i = 2 * n - 1; i > n; i = i - 2)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    else
    {
        for (int i = 2 * n - 1; i > n - 1; i = i - 2)
        {
            sum += arr[i];
        }

        cout << sum + arr[n - 1] << endl;
    }
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