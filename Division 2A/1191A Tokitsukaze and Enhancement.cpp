/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int x,cindex;
    char grade;
    cin>>x;
    if(x%4==1)
        {
            grade='A';
            cout<<0<<" "<<grade<<endl;
            exit(0);
        }
    else
    {
        for(int i=0;i<=2;++i)
        {
            if((x+i)%4==1)
            {
                grade='A';
                cout<<i<<" "<<grade<<endl;
                 exit(0);
            }
            else if((x+i)%4==3)
            {
                if(grade=='A')
                    break;
                cindex=i;
                grade='B';
            }
            else if((x+i)%4==2)
            {
                if(grade=='B')
                    continue;
                cindex=i;
                grade='C';
            }
            else if((x+i)%4==0)
            {
                if(grade=='B' || grade=='C')
                    continue;
                cindex=i;
                grade='D';
            }
        }
        cout<<cindex<<" "<<grade<<endl;
    }
    return 0;
}
/*int main()
{
	int x;
	cin>>x;
	if(x%4==0) puts("1 A");
	else if(x%4==1) puts("0 A");
	else if(x%4==2) puts("1 B");
	else if(x%4==3) puts("2 A");
	return 0;
}*/
