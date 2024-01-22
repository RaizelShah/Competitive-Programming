#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && s[i + 3] == 'W' && s[i + 4] == 'U' && s[i + 5] == 'B')
        {
            i = i + 2;
            cout << "";
        }
        else if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
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