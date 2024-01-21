#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int> uni;

    uni.insert(a);
    uni.insert(b);
    uni.insert(c);
    uni.insert(d);

    cout<<4-uni.size()<<endl;

}
signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}