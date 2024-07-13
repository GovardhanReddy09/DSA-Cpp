
#include <bits/stdc++.h>
using namespace std;
int sum1(int n)
{
    if(n==1)
     return 1;
    else
    {
     return( n + sum1(n-1));
    }
}
int main()
{
    int temp,sum=0;
    for(int i=1;i<100;i++)
    {
        cin>>temp;
        sum=sum+temp;
    }
    cout<<sum1(100) - sum<<endl;

    return 0;
}

