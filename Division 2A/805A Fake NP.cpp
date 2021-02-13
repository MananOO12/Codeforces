/*
    Solution by Manan Jain
    github.com/MananOO12
    www.linkedin.com/in/0012manan-jain
*/

#include<iostream>

using namespace std;

#include<iostream>
using namespace std;
int main() {
	int l, r;
	cin >> l >> r;
	if (l == r) cout << l << endl;
	else cout << "2" << endl;
	return 0;
}
/*
int main()
{
    int l,r,i,div,j,cnt=0;
    cin>>l>>r;

    for(j=2;j<=r;++j)
    {
        int temp=0;
        for(i=l;i<=r;++i)
        {
            if(i%j==0)
            {
                ++temp;
            }
        }
        if(temp>cnt)
        {
            div=j;
            cnt=temp;
        }
    }
    cout<<div;
    return 0;
}
*/
