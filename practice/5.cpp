#include <iostream>

using namespace std;

int calculate(int a,int b);
/*
int main(){
int a=5;
while(a<10){
  cout << a<< endl;
  a+=3;
}
return 0;
}
*/
int main(){
int x=1;
int total=0;
int n;
while (x<=5){
    cin>> n;
  total=calculate(total,n);
x++;
}
cout<< "The total is " << total << endl;
return 0;
}

int calculate(int a,int b){
return a+b;
}
