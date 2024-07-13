//
#include <bits/stdc++.h>
using namespace std;
int vis[400000];
int n,k,m,d;
int flag[400000];
queue<int> q;
vector<pair<int,int>>p[400000];
int main() 
{
    scanf("%d%d%d",&n,&m,&d);
    for(int i=1;i<=m;i++)
    {
        int num;
        scanf("%d",&num);
        vis[num]=1;
        q.push(num);
    }
    for(int i=1;i<=n-1;i++)
    {
       int u,v;
       scanf("%d%d",&v,&u);
       p[u].push_back({v,i});
       p[v].push_back({u,i});
    }
    while(!q.empty())
    {
       int x=q.front();
       q.pop();
       for(int i=0;i<p[x].size();i++)
       {
         int ans=p[x][i].first;
         int cnt=p[x][i].second;
         if(vis[ans])continue;
         vis[ans]=1;
         flag[cnt]=1;
         q.push(ans);
       }
    }
    int cot =0 ;
    for(int i=1;i<n;i++)
    {
        if(!flag[i])
        {
            cot++;
        }
    }
    printf("%d\n",cot);
    for(int i=1;i<n;i++)
    {
        if(!flag[i])
        {
            printf("%d ",i);
        }
    }
    return 0;
}

