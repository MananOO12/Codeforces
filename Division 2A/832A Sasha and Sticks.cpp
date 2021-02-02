/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,k,turn=0;
    string st="NO";
    cin>>n>>k;
    while(n>=k)
    {
        n-=k;
        if(turn==0)
        {
            st="YES";
            turn=1;
        }
        else
        {
            turn=0;
            st="NO";
        }
    }
    cout<<st;
    return 0;
}
