/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c,total=0;
    cin>>a>>b>>c;
    if(a<1 || b<2 || c<4)
    {
        cout<<0;
        exit(0);
    }
    while(a>=1 && b>=2 && c>=4)
    {
        total+=7;
        --a;
        b-=2;
        c-=4;
    }
    cout<<total;
    return 0;
}
