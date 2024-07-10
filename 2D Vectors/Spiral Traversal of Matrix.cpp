//spiral
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,sum,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<vector<int> > v(n,vector<int>(n));
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>v[i][j];
			}
		}
		int rs=0,re=n-1,cs=0,ce=n-1;
		while(rs<=re && cs<=ce)
		{
			for(i=cs;i<=ce;i++)
			{
				cout<<v[rs][i]<<" ";
			}
			rs++;
			for(i=rs;i<=re;i++)
			{
				cout<<v[i][ce]<<" ";
			}
			ce--;
			for(i=ce;i>=cs;i--)
			{
				cout<<v[re][i]<<" ";
			}
			re--;
			for(i=re;i>=rs;i--)
			{
				cout<<v[i][cs]<<" ";
			}
			cs++;
		}
		cout<<endl;
	}
}
