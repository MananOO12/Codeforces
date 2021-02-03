
/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int t,diff,ans=0;
    cin>>t;
    int a,b;
    while(t--)
    {
        ans=0;
        cin>>a>>b;
        diff=a-b;
        if(diff>0)
        {
            if(diff>=5)
            {
                ans+=diff/5;
                diff%=5;
            }
            if(diff>=2)
            {
                ans+=diff/2;
                diff%=2;
            }
            if(diff>=1)
                ans+=diff;
           cout<<ans<<endl;
        }
        else if(diff<0)
        {
            diff=diff*(-1);
//            cout<<diff;
            if(diff>=5)
            {
                ans+=diff/5;
                diff%=5;
               // cout<<diff;
            }
            if(diff>=2)
            {
                ans+=diff/2;
                diff%=2;
            }
            if(diff>=1)
            {
                ans+=diff;
            }
           cout<<ans<<endl;
        }
        else
           cout<<ans<<endl;
    }
    return 0;
}

/*
int main()
{
    int t,i,ct=0;
    cin>>t;
    int a[t],b[t];
    int buttons[3]={1,2,5};
    for(i=0;i<t;++i)
    {
        cin>>a[i]>>b[i];
        if(a[i]==b[i])
        {
            cout<<0;
        }
        //else if(b<a)
        //{
            while(b[i]<=a[i])
            {
                for(int j=0;;)
                {
                    if(buttons[2]<a[i])
                    {
                        a[i]-=buttons[2];
                        ++ct;
                    }
                    else if(buttons[1]<a[i])
                    {
                        a[i]-=buttons[1];
                        ++ct;
                    }
                    else if(buttons[0]<a[i])
                    {
                        a[i]-=buttons[0];
                        ++ct;
                    }
                }
            }
       // else if(b[i]>a[i])
        while(b[i]>=a[i])
        {
            if(buttons[2]<a[i])
            {
                a[i]-=buttons[2];
                ++ct;
            }
            else if(buttons[1]<a[i])
            {
                a[i]-=buttons[1];
                ++ct;
            }
            else if(buttons[0]<a[i])
            {
                a[i]-=buttons[0];
                ++ct;
            }
        }
        cout<<ct;
    }
    return 0;
}

*/
