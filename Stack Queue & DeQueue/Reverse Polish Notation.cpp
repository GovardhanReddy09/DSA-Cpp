#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;  //+, -, *, /, ^ 
    map<char,int> mp;
    mp.insert({'+',1});
    mp.insert({'-',2});
    mp.insert({'*',3});
    mp.insert({'/',4});
    mp.insert({'^',5});
    while(n--){
        string str;
        cin>>str;
        stack<char> s;
        for(int i=0;i<str.length();i++){
            if(str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '^' && str[i] != ')' && str[i] != '(')
               cout<<str[i];
            else if(str[i] == '(')
               s.push(str[i]);
            else if(str[i] == ')'){
                while(s.top() != '('){
                    cout<<s.top();
                    s.pop();
                }
                s.pop();
            }
            else{
                if(s.empty())
                  s.push(str[i]);
                else{
                    if(s.top() != '(' && mp[s.top()] < mp[str[i]]){
                        while(mp[s.top()] < mp[str[i]]){
                            cout<<s.top();
                            s.pop();
                        }
                    }
                    else{
                        s.push(str[i]);
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

//sp
