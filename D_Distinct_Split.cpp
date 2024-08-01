#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    // unordered_set<char> s1;
    // unordered_set<char> s2;
    // unordered_map<char, int> mp;

    // s1.insert(s[0]);
    // mp[s[0]]++;

    // bool flag = false;

    // for (int i = 1; i < n; i++)
    // {
    //     if (s[i] != s[i - 1] and flag == false and mp[s[i]] == 0)
    //     {
    //         s1.insert(s[i]);
    //         mp[s[i]]++;
    //     }
    //     else
    //     {
    //         flag = true;
    //         s2.insert(s[i]);
    //     }
    // }

    // for(auto it: s1)
    //     cout<<it<<" ";
    // cout<<"\n";
    // for(auto it: s2)
    //     cout<<it<<" ";
    // cout<<"\n";

    // cout << s1.size() + s2.size() << "\n";

    vector<int> cnt(26, 0), f(26, 0);
    int ans = 0;

    for (auto it : s)
    {
        cnt[it - 'a']++;
    }

    for (auto it : s)
    {
        cnt[it - 'a']--;
        f[it - 'a']++;

        int cur = 0;
        for (int i = 0; i < 26; i++)
        {
            cur += min((long long)1, cnt[i]) + min((long long)1, f[i]);
        }

        ans = max(ans, cur);
    }

    cout << ans << "\n";
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