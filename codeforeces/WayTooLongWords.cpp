#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
string s;
while(n!=0){
  cin >> s;
  if(s.length()>10){
    cout << s.at(0) << s.length()-2 << s.at(s.length()-1) << endl;
  }else{
  cout << s << endl;
  }
  n--;
}

return 0;
}
