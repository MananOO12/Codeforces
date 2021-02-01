/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,maxc,acount;
    cin >> t;
    while(t--)
    {
        maxc = acount = 0;
        cin >> k;
        string row;
        cin >> row;
        for(int i = 0; i<k; i++)
        {
            if(row[i] == 'A')
            {
                for(int j = i+1; j<k; j++)
                {
                    if(row[j] == 'P')
                        ++acount;
                    else if(row[j] == 'A')
                    {
                        break;
                    }
                }
                if(acount > maxc)
                {
                    maxc = acount;
                }
                acount = 0;
            }
        }
        cout << maxc << endl;
    }
}
/*
#include<iostream>

using namespace std;

int main()
{
    int t,k,i;
    cin>>t;
    int angry[t];
    for(int j=0;j<t;++j)
    {
        cin>>k;
        string st;
        cin>>st;
        for(i=k-1;i>0;--i)
        {
             if(st[i]=='A' && st[k-2]=='P' && i==k-1)
             {
                 //cout<<0;
                 angry[j]=0;
                 break;
             }
             else  if(st[i]=='A' && st[i-1]=='A' && i==k-1)
             {
                 //cout<<0;
                 angry[j]=1;
                 break;
             }
             else if(st[i]=='A' && i==0)
             {
                 //cout<<k-1;
                 angry[j]=k-1;
                 break;
             }
             else if(st[i]=='A')
             {
                 //cout<<k-(i+1);
                 angry[j]=k-(i+1);
                 break;
             }
             else if(st[i]=='A')
             {
                 angry[j]=1;
             }
             else
             {
                 angry[j]=0;
             }
        }
    }
    for(i=0;i<t;++i)
        cout<<angry[i]<<endl;
    return 0;
}*/
