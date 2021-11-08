#include <iostream>

using namespace std;

int main(){

int dipu[5];
int *d0 = &dipu[0];
int *d1 = &dipu[1];
int *d2 = &dipu[2];
int *d3 = &dipu[3];
cout << "d0 is at " << d0 << endl;
cout << "d1 is at " << d1 << endl;
cout << "d2 is at " << d2 << endl;
cout << "d3 is at " << d3 << endl;

d1+=2;
cout << "d1 is at " << d1 << endl;
//Whenever we add something with the pointer it does not change the memory address of the pointer.
//It changes what element it will point to.
return 0;
}
