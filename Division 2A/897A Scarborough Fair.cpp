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
    int n,m,l,r;
    char c1,c2;
    string st;
    cin>>n>>m;
    cin>>st;
    for (int i=0;i<m;++i)
    {
         cin>>l>>r>>c1>>c2;
         for(int i=l-1;i<=r-1;++i)
         {
            if(st[i]==c1)
                st[i]=c2;
         }
    }
    cout<<st;
    return 0;
}
