#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

inline bool in(int i, int j)
{
    return (0 <= i and i < n and 0 <= j and j < m);
}

void solve()
{
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mx = 0;

            for (int k = 0; k < 4; k++)
            {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (in(ni, nj))
                {
                    mx = max(mx, arr[ni][nj]);
                }
            }

            arr[i][j] = min(arr[i][j], mx);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
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