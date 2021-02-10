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
    string home;
    cin>>n>>home;
    string flights[n];
    i=n;
    while(i--)
    {
        cin>>flights[i];
    }
    int index;
    /*for(i=0;i<n;++i)
    {
        //index=flights[i].find("->");
       // cout<<" "<<index;

    }*/
    if(n%2==0)
        cout<<"home";
    else
        cout<<"contest";
    return 0;
}
