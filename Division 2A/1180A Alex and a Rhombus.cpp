/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,sum=0,i;
    cin>>n;
    for(i=1;i<n;++i)
        sum += i*4;
    cout<<sum+1;
    return 0;
}
