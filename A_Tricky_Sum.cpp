#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, sum, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        p = log2(n);
        p++;
        sum = ((n * n + n) / 2) - (2 * (pow(2, p) - 1));
        cout << sum << endl;
    }
} 