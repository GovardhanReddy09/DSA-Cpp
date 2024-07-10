#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,n,rc,i,j;
    cin>>t;
    for(n=1;n<=t;n++)
    {
        cout<<"Test Case #"<<n<<":"<<endl;
        cin>>rc;
        vector<vector<int>> v(rc,vector<int>(rc));
        for(i=0;i<rc;i++)
        {
            for(j=0;j<rc;j++)
            {
                cin>>v[i][j]; 
            }
        }
        for(i=0;i<rc;i++)
        {
            for(j=rc-1;j>=0;j--)
            {
                cout<<v[j][i]<<" "; 
            }
            cout<<endl;
        }
        
    }
    
    
}
