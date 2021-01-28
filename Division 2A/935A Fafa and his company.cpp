/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,ways=1;
    cin>>n;
    for(int e=2;e<n;++e)
    {
        if(n%e==0)
        {
            ++ways;
        }
    }
    cout<<ways;
}
