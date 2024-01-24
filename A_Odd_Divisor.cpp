#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;

    int flag=0;

    if(n%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        while(n>=1)
        {
            n=n/2;

            if(n!=1 && n%2!=0)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
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