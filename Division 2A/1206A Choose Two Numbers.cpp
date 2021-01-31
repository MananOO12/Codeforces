/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

bool CheckIN(int,int[],int[],int,int);

int main()
{
    int n,m,i,j;
    cin>>n;
    int A[n];
    for(i=0;i<n;++i)
        cin>>A[i];
    cin>>m;
    int B[m];
    for(i=0;i<m;++i)
        cin>>B[i];

    for(i=0;i<n;++i)
    {
        bool flag=false;
        for(j=0;j<m;++j)
        {
            if(!CheckIN((A[i]+B[j]),A,B,n,m))
               {
                   cout<<A[i]<<" "<<B[j];
                   flag=true;
                   break;
               }
        }
        if(flag)
            break;
    }
    return 0;
}

bool CheckIN(int check,int A[],int B[],int n,int m)
{
    int i;
    for(i=0;i<n;++i)
        if(check==A[i])
            return true;
    for(i=0;i<m;++i)
        if(check==B[i])
            return true;
    return false;
}
