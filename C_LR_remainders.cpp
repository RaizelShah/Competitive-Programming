#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    int mod = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    string s;
    cin >> s;

    int l = v.size();

    for (int i = 0; i < l; i++)
    {
        mod *= v[i];
    }

    cout << mod % m << " ";
    mod = 1;

    int k = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            k++;
            for (int j = k; j < l; j++)
            {
                mod *= v[j];
            }

            cout << mod % m << " ";
        }
        else
        {
            l--;
            for (int j = k; j < l; j++)
            {
                mod *= v[j];
            }

            cout << mod % m << " ";
        }
        mod = 1;
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