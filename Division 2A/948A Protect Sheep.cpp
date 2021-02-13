/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int r,c,i,j;
    cin>>r>>c;
    char a[r][c];
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
                a[i][j]='D';
        }
    }
  int flag=1;
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            if(a[i][j]=='S')
            {
                if((a[i-1][j]=='W' && i-1>=0) || (a[i+1][j]=='W' && i+1<r) ||
                   (a[i][j-1]=='W' && j-1>=0) || (a[i][j+1]=='W' && j+1<c))
                {
                    flag = -1;
                    break;
                }
            }
        }
        if(flag==-1)
            break;
    }
    if(flag==-1)
        cout<<"No";
    else
    {
        cout<<"Yes\n";
        for(i=0;i<r;++i)
        {
            for(j=0;j<c;++j)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}
