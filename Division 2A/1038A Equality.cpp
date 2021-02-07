/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,k,i,j;
    cin>>n>>k;
    char A[26]={'A'};
    string s;
    cin>>s;
    int min=n,cnt;
    for( i=0;i<25;++i)
        A[i+1]=A[i]+1;
    for(i=0;i<k;++i)
    {
        cnt=0;
        for(j=0;j<n;++j)
        {
            if(A[i]==s[j])
                ++cnt;
        }
        if(cnt<min)
            min=cnt;
    }
    cout<<min*k;
    return 0;
}
