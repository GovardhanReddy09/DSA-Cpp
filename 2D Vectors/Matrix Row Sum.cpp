#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int sum,i,j,r,c,a;
    cin>>r>>c;
    vector <vector<int>> v(r,vector<int>(c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum += v[i][j];
        }
        cout<<sum<<endl;
    }
}
