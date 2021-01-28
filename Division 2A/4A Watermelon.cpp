/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int w;
    cin>>w;
    if(w>=1 || w<=100)
    {
        if(w%2==0)
        {
            int check=w-2;
            w-=check;
            if(w%2==0 && check%2==0 && check>0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    return 0;
}
