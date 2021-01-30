/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int total_red,total_green,total_blue,total_books;
    total_red=ceil(2*n/(k*1.0));
    total_green=ceil(5*n/(k*1.0));
    total_blue=ceil(8*n/(k*1.0));
    total_books=total_red+total_green+total_blue;
    cout<<total_books;
    return 0;
}

/*

int main()
{
    int n,k;
    cin>>n>>k;
    int total_books;
    total_books=ceil(2*n/(k*1.0))+ceil(5*n/(k*1.0))+ceil(8*n/(k*1.0));
    cout<<total_books;
    return 0;
}

Least Variable solution

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<int(ceil(2*n/(k*1.0))+ceil(5*n/(k*1.0))+ceil(8*n/(k*1.0)));
    return 0;
}
*/
