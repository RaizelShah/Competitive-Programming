#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        s = s[2 * i] + s;
    }
    return s;
}
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int k = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) < int(s[s.length() - 1 - i]))
        {
            cout << s << endl;
            return;
        }
        else if (int(s[i]) > int(s[s.length() - 1 - i]))
        {
            cout << reverse(s) << endl;
            return;
        }
    }
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}