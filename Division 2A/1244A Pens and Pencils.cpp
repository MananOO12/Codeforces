/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t],b[t],c[t],d[t],k[t];
    for(int i=0;i<t;++i)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i]>>k[i];
    }
    for(int i=0;i<t;++i)
    {

        int rema=ceil(a[i]/(c[i]*1.0)),remb=ceil(b[i]/(d[i]*1.0));
        if(rema + remb > k[i])
         {
            cout<<-1<<endl;
              continue;
         }
         else
         {
             cout<<rema<<" "<<remb<<endl;
         }
    }
    return 0;
}
