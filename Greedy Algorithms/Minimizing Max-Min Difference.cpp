//Minimizing Max-Min Difference
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,arr[100000];
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&arr[i]);
   }
   sort(arr+1,arr+n+1);
   cout<<min(arr[n]-arr[2],arr[n-1]-arr[1])<<endl;
   return 0;
}
