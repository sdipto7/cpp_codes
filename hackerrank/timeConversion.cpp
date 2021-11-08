#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;

int main(){
int h,m,s;
char str[2];
scanf("%d:%d:%d%s", &h , &m , &s ,str);
cout << s;
if(!strcmp(str,"AM") && h==12) h=0;
if(!strcmp(str,"PM") && h!=12) h+=12;
printf("%02d:%02d:%02d",h,m,s);
return 0;
}
