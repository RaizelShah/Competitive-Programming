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

    map<char, int> mp;
    char c = 'a';

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << c;
            mp[c]++;
            c++;
        }
        else
        {
            for (auto it : mp)
            {
                if (it.second == arr[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
    }
    
    cout<<endl;
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