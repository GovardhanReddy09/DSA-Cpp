#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    long int n,a,b=0,count=0;
    cin>>n;
    a=n;
    vector<long int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j] && i!=j)
            {
              count++;
            }
        }
        if(count==0)
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}

