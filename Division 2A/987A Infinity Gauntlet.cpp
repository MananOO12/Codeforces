/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/


#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    string colors[n];
    string gems[6]={"Power","Time","Space","Soul","Reality","Mind"};
    string colors2[6]={"purple","green","blue","orange","red","yellow"};
    if(n!=0)
    {
        for(i=0;i<n;++i)
        {
            cin>>colors[i];
        }
        for(i=0; i<n;++i)
        {
            for(int j=0;j<6;++j)
                {
                    if(colors2[j]==colors[i])
                        gems[j]="no";
                }
        }
        cout<<6-n<<endl;
        for(i=0;i<6;++i)
        {
            if(gems[i]!="no")
                cout<<gems[i]<<endl;
        }
    }
    else
    {
        cout<<6<<endl;
        for(i=0;i<6;++i)
        {
                cout<<gems[i]<<endl;
        }
    }

    return 0;
}

/*
Try 1:

int main()
{
    int n;
    cin>>n;
    string colors[n];
    string gems[6]={"Power","Time","Space","Soul","Reality","Mind"};
    string colors2[6]={"purple","green","blue","orange","red","yellow"};
    for(int i=0;i<n;++i)
    {
        cin>>colors[i];
    }
    for(int i=0; i<n;++i)
    {
        for(int j=0;j<6;++j)
            {
                if(colors2[j]==colors[i])
                    gems[j]="no";
                cout<<gems[j]<<" ";
            }
            cout<<endl;
    }
    cout<<6-n<<endl;
    for(int i=0;i<n;++i)
    {
        if(gems[i]=="no")
            continue;
        else
            cout<<gems[i]<<endl;
    }
    return 0;
}

Try 2:
int main()
{
    int n;
    cin>>n;
    string colors[n];
    string gems[6]={"Power","Time","Space","Soul","Reality","Mind"};
    string colors2[6]={"purple","green","blue","orange","red","yellow"};
    if(n!=0)
    {
        for(int i=0;i<n;++i)
        {
            cin>>colors[i];
        }
        for(int i=0; i<n;++i)
        {
            for(int j=0;j<6;++j)
                {
                    if(colors2[j]==colors[i])
                        gems[j]="no";
                }
        }
        cout<<6-n<<endl;
        for(int i=0;i<6;++i)
        {
            if(gems[i]!="no")
                cout<<gems[i]<<endl;
        }
    }
    else
    {
        cout<<6<<endl;
        for(int i=0;i<6;++i)
        {
                cout<<gems[i]<<endl;
        }
    }

    return 0;
}
*/
