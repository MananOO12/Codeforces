/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/
/*
    #include <stdio.h>

    int min(int a, int b){ return a < b ? a : b; }
    int abs(int x){ return x < 0 ? -x : x; }

    int main(){
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        int res = 1e9;
        for(int i=1; i<=n; i++){
            int a;
            scanf("%d", &a);
            if(a != 0 && a <= k) res = min(res, abs(i-m));
        }
        printf("%d", 10*res);
        return 0;
    }
*/
#include<iostream>
#include<cmath>

using namespace std;

int minimum(int a, int b)
{
    return((a<b)?a:b);
}

int main()
{
    int n,m,k,i;
    cin>>n>>m>>k;
    int a[n+1];
    int pos=1e9;
    for(i=1;i<=n;++i)
        cin>>a[i];
    for(i=1;i<=n;++i)
    {
        if(a[i]!=0 && a[i]<=k)
            pos = minimum(pos,abs(i-m));

    }
    cout<<10*pos;
    return 0;
}

