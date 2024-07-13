//Maximum Alternating Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,alternatesum1=0,alternatesum2=0;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }
      sort(v.begin(),v.end());
      for(int i=0;i<n;i++)
      {
         if(i<n/2)
         {
           alternatesum1+=v[i]; 
         }
         else
         {
            alternatesum2+=v[i]; 
         }
      }
      cout<<alternatesum2-alternatesum1<<"\n";
   }
}
