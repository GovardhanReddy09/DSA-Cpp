#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int main(){
    int n,res; cin>>n;
    res = sum(n);
    cout<<res;
    return 0;
}
int sum(int n){
    if(n==0)
    return 0;
    else
    return n*n*n+sum(n-1);
}
