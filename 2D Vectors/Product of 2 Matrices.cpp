#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k,t,r,c,r1,c1;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        vector<vector<int>> v1(r,vector<int>(c));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>v1[i][j];
            }
        }
        cin>>r1>>c1;
        vector<vector<int>> v2(r1,vector<int>(c1));
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>v2[i][j];
            }
        }
        vector<vector<int>> v3(r,vector<int>(c1));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                v3[i][j]=0;
                for(k=0;k<c;k++)
                {
                    v3[i][j]=v3[i][j]+v1[i][k]*v2[k][j];
                }
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<v3[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
