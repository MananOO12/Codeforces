/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

int calSum(int [], int, int);
void swapTwo(int &, int &);
int check(int [], int);
void BubbleSort(int B[],int n);

int main()
{
    int n,i,flag=-1;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;++i)
        cin>>a[i];
    flag = check(a,n);
    if(flag==1)
    {
        for(int i=0;i<2*n;++i)
            cout<<a[i]<<" ";
    }
    else
    {
        BubbleSort(a,2*n);
        flag = check(a,n);
        if(flag==1)
        {
            for(int i=0;i<2*n;++i)
                cout<<a[i]<<" ";
        }
    }
    if(flag!=1)
        cout<<-1;
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

int calSum(int a[], int start, int end)
{
    int sum=0,i;
    for(i=start;i<end;++i)
    {
        sum += a[i];
    }
    return sum;
}

void swapTwo(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int check(int a[], int n)
{
    int sum1,sum2,flag;
    sum1 = calSum(a,0,n);
    sum2 = calSum(a,n,2*n);
    //cout<<sum1<<" "<<sum2<<endl;
    if(sum1 != sum2)
    {
       return 1;
    }
    return -1;
}

/*
int main()
{
    int n,i,flag=-1;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;++i)
        cin>>a[i];
    for(i=0;i<n;++i)
    {
        swapTwo(a[i],a[2*n-i-1]);
        flag = check(a,n);
        if(flag==1)
            break;
    }
    if(flag!=1)
        cout<<-1;
    return 0;
}

*/
