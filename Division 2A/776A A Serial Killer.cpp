/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,i;
    string initial[2];
   // scanf("%s%s",initial[0],initial[1]);
    cin>>initial[0]>>initial[1];
    cin>>n;
    string victim1[n],victim2[n];
    for(i=0;i<n;++i)
       cin>>victim1[i]>>victim2[i];

    if(victim1[0]==initial[0])
    {
        victim1[0]=victim2[0];
        victim2[0]=initial[1];
    }
    else if(victim1[0]==initial[1])
    {
        victim1[0]=victim2[0];
        victim2[0]=initial[0];
    }
    cout<<initial[0]<<" "<<initial[1]<<endl;
    cout<<victim1[0]<<" "<<victim2[0]<<endl;

    for(i=1;i<n;++i)
    {
        if(victim1[i]!=victim1[i-1])
            victim1[i]=victim1[i-1];
        else
            victim1[i]=victim2[i-1];
        cout<<victim1[i]<<" "<<victim2[i]<<endl;
    }
    return 0;
}
