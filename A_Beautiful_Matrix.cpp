#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[5][5];
    int a,b;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                a=i;b=j;    
            }
        }
    }

    cout<<abs(2-a)+abs(2-b)<<endl;
}

/*
#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int a[5][5];
    rep(i,0,5)
    {
        rep(j,0,5)
        {
            cin>>a[i][j];
        }
    }
    int x,y;
    rep(i,0,5)
    {
        rep(j,0,5)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    //cout<<x<<" "<<y<<endl;
    cout<<abs(2-x)+abs(2-y)<<endl;
}
signed main()
{
    int t;
    t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
*/