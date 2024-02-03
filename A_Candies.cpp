#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int k=2,x=1;

    // x = n % ((int)(pow(2, k)) - 1);

    while (n > ((int)(pow(2, k) - 1)))
    {
        if(n % ((int)(pow(2, k)) - 1)==0)
        {
            x=n / ((int)(pow(2, k)) - 1);
            break;
        }
        k++;
    }

    cout<<x<<endl;
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