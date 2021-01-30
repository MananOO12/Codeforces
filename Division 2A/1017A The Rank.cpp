/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

struct student
{
    int sum,id;
};

void BubbleSort(student stu[],int n);

int main()
{
    int n,i;
    cin>>n;
    int e[n],g[n],m[n],h[n];
    student stu[n];
    for(i=0;i<n;++i)
    {
        cin>>e[i]>>g[i]>>m[i]>>h[i];
        stu[i].sum=e[i]+g[i]+m[i]+h[i];
        stu[i].id=i+1;
    }
    BubbleSort(stu,n);
    for(i=0;i<n;++i)
    {
        if(stu[i].id==1)
            cout<<i+1;
    }
}

void BubbleSort(student stu[],int n)
{
    int i,j;
    student temp;
    for(i=0; i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(stu[j].sum<stu[j+1].sum)
            {
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;

            }
        }
    }
}


/*
void BubbleSort(int sum[],int id[],int);

int main()
{
    int n,i;
    cin>>n;
    int e[n],g[n],m[n],h[n];
    int id[n],sum[n];
    for(i=0;i<n;++i)
    {
        cin>>e[i]>>g[i]>>m[i]>>h[i];
        sum[i]=e[i]+g[i]+m[i]+h[i];
        id[i]=i+1;
    }
    BubbleSort(sum,id,n);
    for(i=0;i<n;++i)
        if(id[i]==1)
        cout<<i+1;
}

void BubbleSort(int sum[],int id[],int n)
{
    int i,j,temp,index;
    for(i=0; i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(sum[j]<sum[j+1])
            {
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;

                temp=id[j];
                id[j]=id[j+1];
                id[j+1]=temp;
            }
        }
    }

}
*/
