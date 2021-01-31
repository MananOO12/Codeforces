/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

void BubbleSort(int B[],int n);

int main()
{
    int n,m,i,j,c=0;
    cin>>n>>m;
    int seq[n],fingerprints[m],code[m];
    for(i=0;i<n;++i)
        cin>>seq[i];
    for(i=0;i<m;++i)
        cin>>fingerprints[i];
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            if(seq[j]==fingerprints[i])
                 code[c++]=j;
        }
    }
    BubbleSort(code,c);
    for(i=0;i<c;++i)
        cout<<seq[code[i]]<<" ";
    return 0;
}

void BubbleSort(int B[],int n)
{
    int i,j,temp;
    for(i=0; i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(B[j]>B[j+1])
            {
                temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }

}
