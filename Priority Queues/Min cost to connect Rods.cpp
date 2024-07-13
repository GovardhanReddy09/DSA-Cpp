//Rods
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t,n,i,x,a,b,cost; cin>>t;
   while(t--)
   {
       cin>>n;
       priority_queue<int,vector<int>,greater <int>>pq;
       for(i=0;i<n;i++)
       {
           cin>>x;
           pq.push(x);
       }
       cost=0;
       while(pq.size()>1)
       {
           a=pq.top();
           pq.pop();
           b=pq.top();
           pq.pop();
           cost+=(a+b);
           pq.push(a+b);
       }
       cout<<cost<<"\n";
   }
}
