/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    if((l==0 && a==0) || (r==0 && a==0))
        cout<<0;
    else if(l==r && a>0)
        cout<<(2*(l+a/2));
    else
    {
        //int i=a;
        while(a>0)
        {
            if(l<r)
            {
                ++l;
            }
            else if(r<l)
            {
                ++r;
            }
            if(l==r)
            {
               // cout<<l<<" "<<r<<" "<<a-1<<endl;
                cout<<(2*(l+(a-1)/2));
                exit(0);
            }
           //cout<<l<<" "<<r<<" "<<a-1<<endl;
            --a;
        }
        if(l==r)
        {
/*            if(a>0)
                cout<<(2*(l+a/2));
            else*/
                cout<<2*l;
        }
        else
        {
            cout<<2*((l<r?l:r));
        }
    }
    return 0;
}

