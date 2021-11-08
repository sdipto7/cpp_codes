#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main(){
int dipu = 13;
int bucky = 13;

passByValue(bucky);
passByReference(&dipu);

cout << "Bucky is now " << bucky << endl;
cout << "Dipu is now " << dipu << endl;
return 0;
}

void passByValue(int x){
x=99;
}

void passByReference(int *x){
*x=66;
}
