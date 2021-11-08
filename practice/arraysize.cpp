#include <iostream>

using namespace std;

int main(){
  int a[10];
  cout << sizeof(a)/sizeof(a[0]) << endl;
  cout << sizeof(a)/sizeof(*a) << endl;
return 0;
}
