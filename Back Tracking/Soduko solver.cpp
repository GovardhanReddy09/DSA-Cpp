//sudoku
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
int box [9] [9];
bool ok(int &row, int &col, int num) {
if (box [row][col]!=0)
return false;
for(int i=0;i<9;i++) {
  if (box [row] [i]==num || box [i] [col]==num)
 {
      return false;
  }
  }
  int r=(row/3)*3,c=(col/3)*3;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if (box [r+i] [c+j]==num) {
      return false;
  }
  }
}
return true;
}
bool pos (int &row, int &col) {
  int mn=1e4;
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      if (box[i][j]==0){
        int cnt=0;
        for(int k=1;k<=9;k++) {
          cnt+=(ok(i,j,k));
        }
        if (mn>cnt) {
        mn=cnt;
        row=i;
        col=j;
}
}
}
}
return mn<=9;
}
bool dfs() {
int row=0,col=0;
if (!pos(row,col)) {
return true;
}
for(int i=1;i<=9;i++) {
if(ok(row,col,i)) {
box [row][col]=i;
if (dfs()) {
return true;
}
box [row][col]=0;
}
}
return false;
}
void print() {
for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
cout<<box[i][j];
}
cout<<nl;
}
}
int main() {
int test_case;
ios::sync_with_stdio(false); cin.tie (NULL); cout.tie (NULL);
cin>>test_case;
for(int t=1;t<=test_case;t++) {
char ch;
for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
cin>>ch;
box[i][j]=((ch=='.')?0:ch-'0');
}
}
dfs();
cout<<"Case "<<t<<":"<<nl;
print();
}

return 0;

}
