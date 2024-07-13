//minheap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str=="insert")
        {
            cin>>x;
            pq.push(x);
        }
        if(str=="getMin")
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<"\n";
            }
            else
            {
                cout<<"Empty\n";
            }
        }
        if(str=="delMin")
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            
        }
    }
}
