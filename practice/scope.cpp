#include <iostream>

using namespace std;

int dipu=69;

void print(){
cout << dipu << endl;
}

int main(){
  int dipu=22;
  cout << ::dipu << endl;
  cout << dipu << endl;
  print();
return 0;
}
