/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

void calXORinacci(int XOR[],int n,int a,int b);

int main()
{
    int t,i;
    cin>>t;
    int a,b,n,ans;
    while(t--)
    {
        cin>>a>>b>>n;
        int XOR[n];
        calXORinacci(XOR,n,a,b);
        if(n==0)
            ans=a;
        else if(n==1)
            ans=b;
        else
        {
          ans=XOR[n-1]^XOR[n-2];
        }
        cout<<ans<<endl;
    }
    return 0;
}

void calXORinacci(int XOR[],int n,int a,int b)
{
    int y1=a,y2=b,y3;
    XOR[0]=a,XOR[1]=b;
    for(int i=2;i<=n;++i)
    {
        y3=y2^y1;
        XOR[i]=y3;
        y2=y3;
        y1=y2;
    }
}
