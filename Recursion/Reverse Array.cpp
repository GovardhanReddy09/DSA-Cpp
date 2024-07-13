
#include <bits/stdc++.h>
using namespace std;
void reverse(long int a[],int n)
{
    if(n<1)
    {
        
    }
    else
    {
        cout<<a[n]<<" ";
        reverse(a,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    long int a[n];
    for(int i=1;i<=n;i++)
     cin>>a[i];
    reverse(a,n);

    return 0;
}

