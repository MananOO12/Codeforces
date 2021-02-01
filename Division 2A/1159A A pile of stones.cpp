/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,op=0;
    cin>>n;
    char pile[n];
    cin>>pile;
    for(int i=0;i<n;i++)
    {
        if(pile[i]=='-')
            --op;
        else
            ++op;
        if(op<0)
            op=0;
    }

    cout<<op;
    return 0;
}
