#include<bits/stdc++.h>
//cookie
using namespace std;
int main()
{
    int n,k,x,i,cost,a,b;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(i=0;i<n;i++)
    {
        cin>>x;
        pq.push(x);
    }
    cost=0;
    while((pq.size()>1)&&(pq.top()<k))
    {
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        pq.push(a+b*2);
        cost+=1;
    }
    if(pq.top()<k)
    {
        cout<<-1<<"\n";
    }
    else
    cout<<cost<<"\n";
}
