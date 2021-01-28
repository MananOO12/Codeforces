/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,s=0,f=0,i;
    string st;
    cin>>n;
    cin>>st;
    for(i=0;i<n;++i)
    {
        if(st[i]=='S' && st[i+1]=='F' &&st[i]!='\0')
            ++s;
        else if(st[i]=='F' && st[i+1]=='S' &&st[i]!='\0')
            ++f;
    }
    if(s>f)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
