//pretty num

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
       int count=0;
       for(int i=n;i<=k;i++)
        {
            int last=i%10;
            if(last==2 || last==3 || last==9)
            {
                count++;
            }
        }
       cout<<count<<"\n";
    }
    return 0;
}

