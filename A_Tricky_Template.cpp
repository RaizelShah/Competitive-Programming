#include <bits/stdc++.h>
using namespace std;
int T, n;
string a, b, c;
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> a >> b >> c;
        bool f = 0;
        for (int i = 0; i < n; i++)
            if (a[i] != c[i] && b[i] != c[i])
                f = 1;
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}