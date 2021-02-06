/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,v,i;
    cin>>n>>v;
    int money=v,left=v;
    if(v>=n)
    {
        cout<<n-1;
        exit(0);
    }
    for(i=2;i<n;++i)
    {
        --left;
        if(n-i==left)
        {
            break;
        }
        else
        {
            money+=i;
            ++left;
        }
    }
    cout<<money;
    return 0;
}
