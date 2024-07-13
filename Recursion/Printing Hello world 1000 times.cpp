
#include <bits/stdc++.h>
using namespace std;
void hello_world(int n)
{
    if(n==0)
     return;
    else
    {
     cout<<"Hello World\n";
     hello_world(n-1);
    }
}
int main()
{
    hello_world(1000);

    return 0;
}

