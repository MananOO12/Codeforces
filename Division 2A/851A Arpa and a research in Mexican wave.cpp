/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    if(t<=k)
        cout<<t;
    else if(t>k && t<=n)
    {
        cout<<k;
    }
    else
    {
        cout<<(n-(t-k));
    }
    return 0;
}
