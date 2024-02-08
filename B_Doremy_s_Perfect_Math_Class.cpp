#include <bits/stdc++.h>
// #define int long long
using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     set<int> s;

//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         v.push_back(k);
//         s.insert(v[i]);
//     }

//     for (int i = v.size() - 1; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (v[i] > v[j])
//             {
//                 v.push_back(v[i] - v[j]);
//             }
//         }
//     }

//     sort(v.begin(),v.end());
//     for (int i = v.size() - 1; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             s.insert(v[i] - v[j]);
//         }
//     }

//     cout<<s.size()-1<<endl;
//     // for (auto it : v)
//     //     cout << it << " ";
//     // cout << endl;
// }
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

const int maxn=100005;
int a[maxn];
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int tmp=0;
		for(int i=1;i<=n;++i){
			scanf("%d",&a[i]);
			tmp=gcd(tmp,a[i]);
		}
		printf("%d\n",a[n]/tmp+(a[1]==0));
	}
	return 0;
}