#include<bits/stdc++.h>

using namespace std;

int main()
{
        int i, j, k,n;
        cin>>n;

        for (i = 0 ; i<n; i++)
        {
           int ch= 65;
           for (j = 0; j <=i ; j++)
           {
             cout<<(char) (ch+j)<<" ";
           }
           for (k= i-1; k >=0; k--)
           {
              cout<<(char) (ch+k) << " ";
           }
           cout<<endl;
        }
}
