#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin>>a>>b;

    int kx,ky,qx,qy;
    cin>>kx>>ky>>qx>>qy;

    vector<pair<int, int>> k,q;

    k.push_back({kx+b,ky+a});
    k.push_back({kx-b,ky+a});
    k.push_back({kx+b,ky-a});
    k.push_back({kx-b,ky-a});
    k.push_back({kx+a,ky+b});
    k.push_back({kx-a,ky+b});
    k.push_back({kx+a,ky-b});
    k.push_back({kx-a,ky-b});

    q.push_back({qx-b,qy+a});
    q.push_back({qx+b,qy-a});
    q.push_back({qx+b,qy+a});
    q.push_back({qx-b,qy-a});
    q.push_back({qx+a,qy+b});
    q.push_back({qx-a,qy+b});
    q.push_back({qx+a,qy-b});
    q.push_back({qx-a,qy-b});

    set<pair<int,int>> st;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(k[i]==q[j])
                st.insert(k[i]);
        }
    }

    cout<<st.size()<<endl;

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