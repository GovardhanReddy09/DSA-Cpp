#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i,x;
    cin>>n;
    priority_queue<int>max_pq;
    priority_queue<int,vector<int>,greater<int>>min_pq;
    for(i=0;i<n;i++){
        cin>>x;
        if(max_pq.empty() || x<=max_pq.top()){
            max_pq.push(x);
        }
        else{
            min_pq.push(x);
        }
        if(max_pq.size()>min_pq.size()+1){
            min_pq.push(max_pq.top());
            max_pq.pop();
        }
        else if(min_pq.size()>max_pq.size()){
            max_pq.push(min_pq.top());
            min_pq.pop();
        }
        float res;
        if(i%2==0)
            res=max_pq.top();
        else
            res=float((max_pq.top() + min_pq.top())/2.0);
        printf("%.1f\n",res);
    }
}
