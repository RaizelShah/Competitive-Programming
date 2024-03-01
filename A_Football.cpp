#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    if (n == 1)
    {
        cin >> s;
        cout << s;
    }
    else
    {
        string arr[n];
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            arr[i] = s;
        }
        string t = arr[0];
        c1++;
        string t2;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == t)
                c1++;
            else if (arr[i] != t)
            {
                c2++;
                t2 = arr[i];
            }
        }
        if (c1 > c2)
            cout << t;
        else
            cout << t2;
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