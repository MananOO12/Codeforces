/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int i;
    string temp,res="NO";
        //cout<<s.substr(0,2)<<endl;
    for(i=0;i<str.length();++i)
    {
        if ((str[i]=='A' && str[i+1]=='B' && str[i+2]=='C') || (str[i]=='A' && str[i+1]=='C' && str[i+2]=='B') ||
            (str[i]=='B' && str[i+1]=='A' && str[i+2]=='C') || (str[i]=='B' && str[i+1]=='C' && str[i+2]=='A') ||
            (str[i]=='C' && str[i+1]=='B' && str[i+2]=='A') || (str[i]=='C' && str[i+1]=='A' && str[i+2]=='B'))
            {
               res="YES";
                break;
            }
    }
    cout<<res;
    return 0;
}

/*

temp = s.substr(i,i+2);
        if(!temp.find('.') && (temp.find('A') && temp.find('B') &&temp.find('C')))
            res = "YES";

            */
