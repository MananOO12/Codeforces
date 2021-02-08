
/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

void calXORinacci(long long XOR[],int n,int a,int b);

int main()
{
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    for(int i=h;i>=0;--i)
    {
        w+=i;
        if(i==d1)
            w-=u1;
        else if(i==d2)
            w-=u2;
        //else

            //cout<<i<<" "<<w<<endl;;
            if(w<0)
                w=0;
    }
    cout<<w;
    return 0;
}
