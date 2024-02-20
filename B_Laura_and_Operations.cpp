#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x, y, z;

    x = a;
    y = b;
    z = c;
    int temp = min(y, z);
    x += temp;
    y -= temp;
    z -= temp;

    if (max(y, z) % 2 == 1)
        cout << 0 << " ";
    else
    {
        if (x != 0)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    x = b;
    y = a;
    z = c;
    temp = min(y, z);
    x += temp;
    y -= temp;
    z -= temp;

    if (max(y, z) % 2 == 1)
        cout << 0 << " ";
    else
    {
        if (x != 0)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    x = c;
    y = b;
    z = a;
    temp = min(y, z);
    x += temp;
    y -= temp;
    z -= temp;

    if (max(y, z) % 2 == 1)
        cout << 0 << " "<<endl;
    else
    {
        if (x != 0)
            cout << 1 << " "<<endl;
        else
            cout << 0 << " "<<endl;
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