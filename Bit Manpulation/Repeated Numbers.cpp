#include <bits/stdc++.h>
//repeated num in bits
using namespace std;

int main() 
{
    int t,i,j;
    unsigned int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int>v(n);
        vector<int> c;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((v[i]^v[j])==0)
                    c.push_back(v[i]);
            }
        }
        sort(c.begin(),c.end());
        for(i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<"\n";
        c.clear();
    }
}
