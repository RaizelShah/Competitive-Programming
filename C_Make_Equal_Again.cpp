#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int front = 1, back = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
            front++;
        else
            break;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == arr[i + 1])
            back++;
        else
            break;
    }
    if (front == n)
    {
        cout << 0 << endl;
    }
    else
    {
        if (arr[0] == arr[n - 1])
            cout << n - (front + back) << endl;
        else
            cout << n - (front + back) + min(front, back) << endl;
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