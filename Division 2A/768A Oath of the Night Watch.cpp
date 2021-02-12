/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<algorithm>

using namespace std;

void BubbleSort(int B[],int n);

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n);
   /* if(n-2 >= 0)
    cout<<n-2;*/
    int cnt=0;
    for(i=0;i<n;++i)
    {
        if(a[i]>a[0] && a[i]<a[n-1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}
