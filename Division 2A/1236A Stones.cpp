/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,stones;
    while(t--)
    {
        cin>>a>>b>>c;
        stones=0;
        if((a==0 && b<1) || (b<2 && c<2))
        {
            cout<<0<<endl;
            continue;
        }
        while(b>0 && c>=2)
        {
            b-=1;
            c-=2;
            stones+=3;
        }
        while(a>0 && b>=2)
        {
            a-=1;
            b-=2;
            stones+=3;
        }
        //if(a>b && b>=2)
       cout<<stones<<endl;
    }
    return 0;
}

/*
int main()
{
    int t;
    cin>>t;
    int a,b,c,stones;
    while(t--)
    {
        cin>>a>>b>>c;
        stones=0;
        if((a==0 && b<1) || (b<2 && c<2))
        {
            cout<<0<<endl;
            continue;
        }
        if(b>=a)
        {
            if( c>=b)
            {
                while(b>0 && c>=2)
                {
                    b-=1;
                    c-=2;
                    stones+=3;
                }
            }
        }
        if(b>c)
        {
            while(a>0 && b>=2)
            {
                a-=1;
                b-=2;
                stones+=3;
            }
        }
        if(a>b && b>=2)
       cout<<stones<<endl;
    }
    return 0;
}

*/
