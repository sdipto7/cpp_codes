#include <iostream>
#include <string>

using namespace std;

int main(){
string str;
cin >> str;
int count;
bool check=false;
for(int i=0;i<str.length()-1;){
    if(i==str.length()) break;
  if(str.at(i)=='1' && i<str.length()){
       count=0;
      while(str.at(i)=='1' && i<str.length()){
        i++;
        count++;
        if(count >= 7) {
            check=true;
       }

      }
  }else if(str.at(i)=='0' && i<str.length()){
    count = 0;
  while(str.at(i)=='0' && i<str.length()){
    i++;
    count++;
    if(count>=7){
      check=true;
    }
  }
}
}
if(check){
  cout << "YES" << endl;
}else {
cout << "NO" << endl;
}

return 0;}
