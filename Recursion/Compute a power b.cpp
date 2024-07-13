
#include <bits/stdc++.h>
using namespace std;
 long int power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
     return a * power(a,n-1);
}
int main()
{
    int n,a;
   cin>>a>>n;
   cout<<power(a,n)<<endl;

    return 0;
}

