/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int zeroct=0,onect=0,n,i;
    string str;
    cin>>n;
    cin>>str;
    for(i=0;i<n;++i)
    {
        if(str[i]=='z')
            ++zeroct;
       if(str[i]=='n')
            ++onect;
    }
    for(i=0;i<onect;++i)
        cout<<1<<" ";
    for(i=0;i<zeroct;++i)
          cout<<0<<" ";
    return 0;
}
