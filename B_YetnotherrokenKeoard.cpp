#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int ctrb = 0, ctrB = 0;

    string temp = "";
    int n=s.length();

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
            ctrB++;
        else if (s[i] == 'b')
            ctrb++;
        else
        {
            if (islower(s[i]) && ctrb > 0)
                ctrb--;
            else if (isupper(s[i]) && ctrB > 0)
                ctrB--;
            else
            {
                temp += s[i];
            }
        }
    }
    int k=temp.length();

    for (int i = k - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
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