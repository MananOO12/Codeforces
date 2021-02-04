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
    int planes[n];
    int t0,t1,t2,t3;
    for(int i=0;i<n;++i)
        cin>>planes[i];
    for(int i=0;i<n;++i)
    {
        //(t1,t2) ; (t2,t3) ; (t3,t1)
        t1=i+1;
        t2=planes[t1-1];
        t3=planes[t2-1];
        //cout<<t1<<" "<<t2<<" "<<t3;
        //if()
       // if(t2==planes[t2-1])
        if(planes[t3-1]==t1)
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
    return 0;
}
