#include <iostream>
#include <stdio.h>
/*
iostream is for cout,cin;
stdio.h is for printf,scanf;
mix use of cin,cout,printf,scanf works;
*/

using namespace std;

int main() {
    float a, b, sum;
    cout << "Enter a number \n";
    cin >> a;
    cout << "Enter another number" << endl;
    scanf("%f",&b);
    cout << "if you want to add press 1 if you want to substract press 2" << endl;
    int choice;
    cin >> choice;
    if (choice == 1 || choice == 2) {
        if (choice == 1) {
            sum = a + b;
            printf("The sum of %f and %f is %.2f", a, b, sum);
        } else {
            sum = a - b;
            printf("The substraction of %f and %f is %.2f", a, b, sum);
        }
    } else {
        cout << "Wrong command";
    }
    return 0;
}
