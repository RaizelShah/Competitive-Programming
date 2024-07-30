#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    string ans;

    ans.push_back(s[0]);
    if (s.length() == 1)
    {
        if (s[0] == 'z')
        {
            ans.push_back('a');
            cout << ans << endl;
            return;
        }
        else
        {
            ans.push_back(s[0] + 1);
            cout << ans << endl;
            return;
        }
    }

    int ctr = 0;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1] and ctr == 0)
        {
            char c;
            if (s[i] == 'z')
            {
                c = 'a';
            }
            else
            {
                c = s[i] + 1;
            }
            ans.push_back(c);
            ans.push_back(s[i - 1]);
            ctr++;
        }
        else
        {
            ans.push_back(s[i]);
        }
    }

    if (ctr == 0)
    {
        if (s[s.length() - 1] == 'z')
            ans.push_back('a');
        else
            ans.push_back(s[s.length() - 1] + 1);
    }

    cout << ans << endl;
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