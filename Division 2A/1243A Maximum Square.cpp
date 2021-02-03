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
    int k,i,j,ct;
    cin>>k;
    int n,order[k];
    for(i=0;i<k;++i)
    {
        cin>>n;
        int planks[n];
        for(j=0;j<n;++j)
            cin>>planks[j];
        BubbleSort(planks,n);
        ct=0;
        for(int l=0;l<n;++l)
        {
            if(planks[l]>=l+1)
            {
                ++ct;
            }
        }
        order[i]=ct;
    }
    for(i=0;i<k;++i)
        cout<<order[i]<<endl;
    return 0;
}

void BubbleSort(int B[],int n)
{
    int i,j,temp;
    for(i=0; i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(B[j]<B[j+1])
            {
                temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
}
