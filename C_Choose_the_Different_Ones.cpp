//Attempted but not accepted

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
// void solve()
// {
//     int n,m,k;
//     cin>>n>>m>>k;

//     vector<int> v1;
//     vector<int> v2;

//     int l;

//     for(int i=0;i<n;i++)
//     {
//         cin>>l;
//         v1.push_back(l);
//     }
//     for(int i=0;i<m;i++)
//     {
//         cin>>l;
//         v2.push_back(l);
//     }

//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end());

//     int flag=0;

//     int arr[n];

//     for(int i=0;i<k/2;i++)
//     {
//         if(v1[i]>k || v2[i]>k)
//         {
//             flag=1;
//             cout<<"NO"<<endl;
//             break;
//         }
//         else
//         {
//             if(abs(v1[i]-v2[i])==1)
//             {
//                 arr[i]
//             }
//         }
        
//     }

//     if(flag=1)
//     cout<<"NO"<<endl;
//     else
//     cout<<"YES"<<endl;

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