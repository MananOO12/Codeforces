/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<cmath>

using namespace std;

int calTiredness(int);

int main()
{
    int a,b;
    cin>>a>>b;
    int mid=(a+b)/2;
    int t1=0,t2=0;
    int d=abs(a-b);
    if(d==1)
        cout<<1;
    else if(d==2)
        cout<<2;
    else
    {
        t1=calTiredness(abs(mid-a));
        t2=calTiredness(abs(mid-b));
        cout<<t1+t2;
    }
    return 0;
}

int calTiredness(int t)
{
    int res=t*(t+1)/2;
    return res;
}
