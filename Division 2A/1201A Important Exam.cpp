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
    int n,m,i,j;
    cin>>n>>m;
    string s[n];
    int a[m];
    for(i=0;i<n;++i)
    {
            cin>>s[i];
    }
    for(i=0;i<m;++i)
    {
        cin>>a[i];
    }
    int marks=0;
    //int op[5];
    for(j=0;j<m;++j)
    {
      int  op[5]={0,0,0,0,0};
        for(i=0;i<n;++i)
        {
            switch(s[i][j])
            {
                case 'A':
                {
                    ++op[0];
                    break;
                }
                case 'B':
                {
                    ++op[1];
                    break;
                }
                case 'C':
                {
                    ++op[2];
                    break;
                }case 'D':
                {
                    ++op[3];
                    break;
                }
                case 'E':
                {
                    ++op[4];
                    break;
                }
            }
        }
        BubbleSort(op,5);
      //  for(int k=0;k<5;++k)
        //    cout<<op[k]<<" ";
        marks+=(op[0]*a[j]);
    //    cout<<endl<<marks<<endl;
    }
    cout<<marks;
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


/*

void BubbleSort(int [],int);
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    //string s[n];
    int a[m];
    char s[n][m];
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
            cin>>s[i][j];
    }
    for(i=0;i<m;++i)
    {
        cin>>a[i];
    }
    int marks=0;
    //int op[5];
    for(j=0;j<m;++j)
    {
      int  op[5]={0,0,0,0,0};
        for(i=0;i<n;++i)
        {
            switch(s[i][j])
            {
                case 'A':
                {
                    ++op[0];
                    break;
                }
                case 'B':
                {
                    ++op[1];
                    break;
                }
                case 'C':
                {
                    ++op[2];
                    break;
                }case 'D':
                {
                    ++op[3];
                    break;
                }
                case 'E':
                {
                    ++op[4];
                    break;
                }
            }
        }
        BubbleSort(op,5);
      //  for(int k=0;k<5;++k)
        //    cout<<op[k]<<" ";
        marks+=(op[0]*a[j]);
    //    cout<<endl<<marks<<endl;
    }
    cout<<marks;
    return 0;
}
*/
