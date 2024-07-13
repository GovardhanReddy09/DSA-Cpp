#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        stack<char> st;
        if(str.length()%2 ==1 ){
          cout<<"NO"<<endl;
          continue;
        }
        for(int i=0;i<str.length();i++){
            if(st.empty())
              st.push(str[i]);
            else if((str[i] == ')' && st.top() == '(') || (str[i] == ']' && st.top()=='[') || (str[i] == '}' && st.top()=='{'))
              st.pop();
            else
              st.push(str[i]);
        }
        if(st.empty())
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    return 0;
}
