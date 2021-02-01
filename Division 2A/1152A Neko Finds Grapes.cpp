/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    int chests[n],keys[m];
    for(i=0;i<n;++i)
        cin>>chests[i];
    for(i=0;i<m;++i)
        cin>>keys[i];
    int open,ec,oc,ek,ok;
    ec=oc=ek=ok=0;
    for(i=0;i<n;++i)
    {
        if(chests[i]%2==0)
            ++ec;
        else
            ++oc;
    }
    for(i=0;i<m;++i)
    {
        if(keys[i]%2==0)
            ++ek;
        else
            ++ok;
    }
    open = ((ec>ok)?ok:ec) + ((oc>ek)?ek:oc); //min(ec+ok)+min(oc+ek)
    cout<<open;
    return 0;
}
/*
To be checked
int main()
{
    int n,m,i,j,used=-1;
    cin>>n>>m;
    int chests[n],keys[m];
    for(i=0;i<n;++i)
        cin>>chests[i];
    for(i=0;i<m;++i)
        cin>>keys[i];
    int open=0;
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            if((chests[i]+keys[j])%2 !=0 && j != used)
            {
                ++open;
                used=j;
                break;
            }
        }
    }
    cout<<open;
    return
*/
