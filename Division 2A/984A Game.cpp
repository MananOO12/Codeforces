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
    int n,i,j,k,turn=0,answer;
    cin>>n;
    if(n==1)
    {
        cin>>n;
        cout<<n;
    }
    else
    {
        int numbers[n];
        for(i=0;i<n;++i)
            cin>>numbers[i];
        BubbleSort(numbers,n);
        for(i=0,k=0,j=n-1;k<n-1;++k)
        {
            if(turn==0)
            {
                numbers[j--]= 0;
                turn=1;
            }
            else
            {
                numbers[i++]= 0;
                turn=0;
            }
            //cout<<numbers[i]<<" "<<numbers[j]<<endl;
            if(numbers[j]!=0)
                answer=numbers[j];
            else if(numbers[i]!=0)
                answer=numbers[i];
        }
        cout<<answer;
        /*for(i=0;i<n;++i)
            if(numbers[i]!=0)
            cout<<numbers[i];*/
    }
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


/*
Another Solution

int main()
{
    int n,i,j,k,turn=0,answer;
    cin>>n;
    if(n==1)
    {
        cin>>n;
        cout<<n;
    }
    else
    {
        int numbers[n];
        for(i=0;i<n;++i)
            cin>>numbers[i];
        BubbleSort(numbers,n);
        for(i=0,k=0,j=n-1;k<n-1;++k)
        {
            if(turn==0)
            {
                numbers[j--]= 0;
                turn=1;
            }
            else
            {
                numbers[i++]= 0;
                turn=0;
            }
        }
        for(i=0;i<n;++i)
            if(numbers[i]!=0)
            cout<<numbers[i];
    }
    return 0;
}
*/
