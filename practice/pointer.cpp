#include <iostream>

using namespace std;

int main(){
int fish = 5;
cout << &fish << endl;
//&x this gives the memory address of the variable x.
int *fishPointer;
fishPointer = &fish;
cout << fishPointer << endl;
return 0;
}
