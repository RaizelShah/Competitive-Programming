#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ctr = 1;

    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<s.length();j++)
        {
            if(s[j]==s[j+1])
            {
                ctr++;
            }
            else
            {
                break;
            }
        }
        if(ctr>=7)
        break;
        else
        ctr=1;
    }

    if(ctr>=7)
    cout<<"YES";
    else
    cout<<"NO";
    /*int c = 1;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            if (c >= 7)
            {
                cout << "YES" << endl;
                return;
            }
            //cout << c << " ";
        }
        else
        {
            c = 1;
        }
    }
    cout << "NO" << endl;*/
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