#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int ctr0 = 0;
    int ctr1 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            ctr0++;
        else
            ctr1++;
    }

    if (ctr1 == ctr0)
    {
        cout << 0 << endl;
        return;
    }

    string temp =s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0' && ctr1>0)
        {
            s[i]='1';
            ctr1--;
        }
        else if(s[i]=='1' && ctr0>0)
        {
            s[i]='0';
            ctr0--;
        }
    }

    int c=0,k=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=temp[k])
        {
            k++;
            continue;
        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
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