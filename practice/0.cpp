#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
    /*

    cout << "DIPU" <<endl;
    cout << "ROG\n";
    cout << "iPhone   ";
    cout << "DIPU \nis \nthe \nbest\n";
    cout << 25<<endl;

    int a;
    int b;
    int sum;
    cout << "Enter 2 numbers \n" << "first number \n";
    cin >> a;
    cout<< "second number\n";
    cin >> b;
    sum= a+b;
    cout<< "The sum of the two numbers are "<< sum; */
/*
    int x,y;
    cin>> x;
    cin >> y;
    if(x>y){
        cout<<"XXXX"<<endl;
    }else{
    cout<< "LOSER"<<endl;
    }
    if(x==6){
        cout<< "You are awesome"<<endl;
    }else {
    cout<< " TRY AGAIN "<<endl;
    }
    */

    cout<< add(5,6)<<endl;
    return 0;
}

int add(int x, int y){
return x+y;
}
