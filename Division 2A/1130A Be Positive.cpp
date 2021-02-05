/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,i,pos=0,neg=0;
    cin>>n;
    float a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>0 && a[i]!=0)
            ++pos;
        else if(a[i]<0 && a[i]!=0)
            ++neg;
    }
    if(n%2!=0)
        n+=1;
    if(pos>=n/2)
        cout<<1;

    else if(neg>=n/2)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
