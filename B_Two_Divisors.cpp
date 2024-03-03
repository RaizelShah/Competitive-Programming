#include <bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
        cout << b * (b / a) << endl;
    else
        cout << b * (a / gcd(a, b)) << endl;
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