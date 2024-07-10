//multiply arr
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long int t,n,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=1;
        vector<int> v(n);
        for(i=0;i<n;i++)
            cin>>v[i];
        for(i=0;i<n;i++)
        {
            p=p*v[i];
        }
        cout<<p<<endl;
    }
    
    return 0;
}

