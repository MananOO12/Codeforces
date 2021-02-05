/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,S;
    cin>>n>>S;
    int minCount=S/n;
    S-=(minCount*n);
    //cout<<S<<endl;
    for(int i=n-1;i>=1;--i)
    {
        if(i<=S && S>0)
        {
            S-=i;
            minCount+=1;
        }
    }
    cout<<minCount;
    return 0;
}
