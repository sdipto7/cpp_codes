#include <iostream>

using namespace std;

int main(){
char c;
cout << sizeof(c) << endl;
double dipu[10];
cout << sizeof(dipu) << endl;
cout << sizeof(dipu) / sizeof(*dipu) << endl;
cout << sizeof(dipu) / sizeof(dipu[0]) << endl;
return 0;
}
