#include <iostream>

using namespace std;

int main(){
/*
int a;
cin >> a;
do{
  cout << a << endl;
  a++;
}while (a<=10);
*/
int age;
cin >> age;
switch(age){
case 17:
  cout << "You are not old enough to drink" << endl;
  break;
case 18:
  cout << "You can have 1 beer" << endl;
  break;
case 19:
  cout << "TEQUILLA?? ;)"<< endl;
  break;
default:
  cout << "SORRY you get nothing" << endl;

}


return 0;
}
