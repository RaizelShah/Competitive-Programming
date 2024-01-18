#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp ="";

    if(s.length()==1)
    {
        cout<<s;
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='+')
            temp=temp+s[i];
        }

        sort(temp.begin(), temp.end());

        for(int i=0;i<temp.length();i++)
        {
            if(i==temp.length()-1)
            cout<<temp[i];
            else
            cout<<temp[i]<<"+";
        }
    }
}