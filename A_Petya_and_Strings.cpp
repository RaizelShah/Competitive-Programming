#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cin>>s1>>s2;

    int flag;

    for(int i=0;i<s1.length();i++)
    {
        if(tolower(s1[i])>tolower(s2[i]))
        {
            flag=1;
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i]))
        {
            flag=-1;
            break;
        }
        else
        flag=0;
    }

    cout<<flag<<endl;
}