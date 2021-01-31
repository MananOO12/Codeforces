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
    int n,i,distinct=0,zcount=0;
    cin>>n;
    int scores[n],winners[n];
    for(i=0;i<n;++i)
    {
         cin>>scores[i];
    }
    BubbleSort(scores,n);
    for(i=0;i<n;++i)
    {
            while(scores[i]==scores[i+1] && i<n-1)
            {
                ++i;
            }
          if(scores[i]!=0)
            ++distinct;
    }
    cout<<distinct;
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


