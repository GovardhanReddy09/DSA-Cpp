#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if(j==i)
            {
                cout<<"*";
            }
            else
               cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

