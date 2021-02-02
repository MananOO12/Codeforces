/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n-2)%3==0)
        printf("1 2 %d",n-3);
    else
        printf("1 1 %d",n-2);
    return 0;
}
/*
int main()
{
    int n;
    cin>>n;
    if(n%3==0)
    {
        if((n/3)%3==0)
            cout<<((n/3)-1)<<" "<<((n/3)-1)<<" "<<((n/3)+2);
        else
            cout<<n/3<<" "<<n/3<<" "<<n/3;
    }
    else
    {
        int div = n/3;
        if(div%3==0)
        {
            if((n-2*div)%3==0)
                cout<<(div+2)<<" "<<(div-1)<<" "<<(n-2*div-1);
            else
                cout<<(div-1)<<" "<<(div+1)<<" "<<(n-2*div);
        }
        else if((n-2*div)%3==0)
               cout<<div<<" "<<(div-1)<<" "<<(n-2*div+1);
        else
            cout<<div<<" "<<div<<" "<<(n-2*div);
    }
    return 0;
}
*/
