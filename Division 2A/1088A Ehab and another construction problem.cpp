/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int x,a,b;
    cin>>x;
    bool flag;
    for(b=1;b<=x;++b)
    {
        flag=false;
        for(a=1;a<=x;++a)
        {
            if((a%b == 0) && (a*b > x) && (a/b < x))
            {
                cout<<a<<" "<<b;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(!flag)
    {
        cout<<-1;
    }
    return 0;
}

/*
Another Solution:

int main()
{
    int x,a,b;
    cin>>x;
    bool flag;
    for(a=1;a<=x;++a)
    {
        flag=false;
        for(b=1;b<=x;++b)
        {
            if((a%b == 0) && (a*b > x) && (a/b < x))
            {
                cout<<a<<" "<<b;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(!flag)
    {
        cout<<-1;
    }
    return 0;
}
*/
