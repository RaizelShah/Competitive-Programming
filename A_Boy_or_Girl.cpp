#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char> uc;
    
    for(int i=0;i<s.length();i++)
    {
        uc.insert(s[i]);
    }

    if(uc.size()%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;

}