/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,rem;
    cin>>n;
    rem=n%10;
    if(rem==0)
        cout<<n;
    else if(rem<=5)
    {
        n-=rem;
        cout<<n;
    }
    else
    {
        n+=(10-rem);
        cout<<n;
    }
    return 0;
}
