#include <iostream>
#include <cstring>

using namespace std;

int main(){
int n;
cin >> n;
string str;
cin >> str;
int rooms[10];
memset(rooms,0,10);
int l=0;
int r=9;
for(int i=0;i<str.length();i++){
  if(str[i]=='L'){
    rooms[l]=1;
    l++;
  }else if (str[i]=='R'){
    rooms[r]=1;
    r++;
  }
}
for(int i=0;i<10;i++){
  cout << rooms[i];
}
cout << endl;


return 0; }
