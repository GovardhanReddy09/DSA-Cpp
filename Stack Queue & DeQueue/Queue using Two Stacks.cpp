#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
     queue<int> q;
    while(t--){
        int a,n;
        cin>>a;
        if(a == 1){
            cin>>n;
            q.push(n);
        }
        else if(a == 2){
           if(!q.empty()){
             q.pop();
           }
        }
        else if(a == 3)
           cout<<q.front()<<endl;
    }
    
    return 0;
}
