#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  float pos=0,neg=0,zero=0;
  for (int i=0;i<n;i++){
    int a;
    cin >> a;
    if(a>0){
      pos++;
    }else if (a<0){
    neg++;
    }else {
    zero++;
    }
  }
  printf("%.6f \n",pos/n);
  printf("%.6f \n",neg/n);
  printf("%.6f \n",zero/n);
return 0;
}
