/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

bool isFibonacci(int fibo[],int check);

int main()
{
    int n,i,y1=1,y2=1,y3;
    cin>>n;
    char name[n];
    name[0]='O';
    int fibo[n]={y1};
    for(i=1;i<n;++i)
    {
        y3=y1+y2;
        y1=y2;
        y2=y3;
        fibo[i]=y3;
        if(isFibonacci(fibo,(i+1)))
            name[i]='O';
        else
            name[i]='o';
    }
    for(i=0;i<n;++i)
    cout<<name[i];
    return 0;
}

bool isFibonacci(int fibo[],int check)
{
    for(int i=0;i<check;++i)
    {
        if(fibo[i]==check)
            return true;
    }
    return false;
}
