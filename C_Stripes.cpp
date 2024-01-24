#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    vector<vector<char>> arr;
    int ctrR = 0;
    int flag = 0;
    char k;

    for (int i = 0; i < 8; i++)
    {
        vector<char> row;
        for (int j = 0; j < 8; j++)
        {
            cin >> k;
            row.push_back(k);
        }
        arr.push_back(row);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'R')
            {
                ctrR++;
            }
        }
        if (ctrR == 8)
        {
            flag = 1;
            break;
        }
        else
        {
            ctrR = 0;
        }
    }

    if (flag == 1)
        std::cout<<"R"<<endl;
    else
        std::cout << "B" << endl;
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