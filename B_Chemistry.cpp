#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ctr = 0;

    string str;
    cin >> str;

    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(str[i]) == mp.end())
        {
            mp.insert(make_pair(str[i], 1));
        }
        else
        {
            mp[str[i]]++;
        }
    }


    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            ctr++;
        }
        
    }
    

    if(ctr>k+1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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