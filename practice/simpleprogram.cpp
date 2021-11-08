#include <iostream>

using namespace std;

int main(){
int age;
int numberOfPeopleEntered=0;
int ageTotal=0;
cout << "Enter first person's age or -1 to quit" << endl;
cin >> age;
while (age!=-1){
  ageTotal+=age;
  numberOfPeopleEntered++;

  cout << "Enter next person's age or -1 to quit" <<endl;
  cin >> age;
}

cout << "The number of people entered: " << numberOfPeopleEntered << endl;
cout << "Average age is: " << ageTotal/numberOfPeopleEntered << endl;
return 0;
}
