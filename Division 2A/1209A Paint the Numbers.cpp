/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

void BubbleSort(int [],int);

int main()
{
    int n,i,temp,paint=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    BubbleSort(a,n);
    for(i=0;i<n-1;++i)
    {
        //cout<<"1st"<<endl;
        temp=a[i];
        if(temp!=0)
        {
            for(j=i+1;j<n;++j)
            {
                if(a[j]%temp==0)
                {
                    //cout<<a[j]<<" ";
                    a[j]=0;
                }
            }
        }

    }

    for(i=0;i<n;++i)
    {
        if(a[i]!=0)
        {
            ++paint;
            //cout<<a[i]<<" ";
        }
    }
    cout<<paint;
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

