#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,ctr=0;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;

        if(a==1 && b==1)
        ctr++;
        else if(b==1 && c==1)
        ctr++;
        else if(a==1 && c==1)
        ctr++;
    }

    cout<<ctr;
    return 0;
}