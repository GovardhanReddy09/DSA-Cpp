#include<bits/stdc++.h>

using namespace std;

void inter(int i,string s1,int j,string s2,string s3,vector<string>&r)
{
    if(i==s1.length()&& j==s2.length()){
        r.push_back(s3);
    }
    if(i<s1.length()){
        inter(i+1,s1,j,s2,s3+s1[i],r);
    }
    if(j<s2.length()){
        inter(i,s1,j+1,s2,s3+s2[j],r);
    }
}
int main()
{
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<":"<<endl;
        string s1,s2;
        cin>>s1>>s2;
        vector<string>r;
        inter(0,s1,0,s2,"",r);
        sort(r.begin(),r.end());
        for(string s:r){
            cout<<s<<endl;
        }
        i++;
    }
}
	   	   	  	    		 			   	 	  	
