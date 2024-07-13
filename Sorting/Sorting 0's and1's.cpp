#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,n,i,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                cout<<"0"<<" ";
                count++;
            }
        }
        for(i=0;i<n-count;i++)
        {
            cout<<"1"<<" ";
        }
       cout<<endl;
   }
    return 0;
}
