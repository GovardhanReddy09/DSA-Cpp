//BOMB
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long int t,n,x;
   cin>>t;
   while(t--){
       cin>>n>>x;
       vector<long int> v(n);
       for(int i=0;i<n;i++)
          cin>>v[i];
        int flag=0;
        for(int i=n-1;i>=0;i--){
            if(x > v[i]){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
          cout<<0<<endl;
   }
    return 0;
}
