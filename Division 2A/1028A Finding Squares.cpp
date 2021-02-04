/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char A[r][c];
    int x1,x2,x3,y1,y2,y3;
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            cin>>A[i][j];
        }
    }
    /*for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }*/

    bool flag=false;

    for(int i=0;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            if(A[i][j]=='B')
            {
                x1=i;
                y1=j;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }

    for(int i=0;i<r;++i)
    {
        flag=false;
        for(int j=c-1;j>=0;--j)
        {
            if(A[i][j]=='B')
            {
                x2=i;
                y2=j;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }

    for(int i=r-1;i>=0;--i)
    {
        flag=false;
        for(int j=0;j<c;++j)
        {
            if(A[i][j]=='B')
            {
                x3=i;
                y3=j;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
  //cout<<x1<<" "<<x2<<" "<<x3<<" "<<y1<<" "<<y2<<" "<<y3;
    //ans = A[((x1+x2)/2)+1][((y1+y3)/2)+1];
    cout<<((x1+x3)/2)+1<<" "<<((y1+y2)/2)+1;
    return 0;

}

/*
            cin>>temp;
            if(temp!='W')
                B[r++][c++]=temp;
*/
