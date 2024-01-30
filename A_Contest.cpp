#include <bits/stdc++.h>
#define int double
using namespace std;
void solve()
{
    int m, v, mt, vt;
    cin >> m >> v >> mt >> vt;

    int m_t = max((3 * m) / 10, m - (m / 250) * mt);
    int v_t = max((3 * v) / 10, v - (v / 250) * vt);

    if(m_t>v_t)
    cout<<"Misha"<<endl;
    else if(m_t<v_t)
    cout<<"Vasya"<<endl;
    else
    cout<<"Tie"<<endl;

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
