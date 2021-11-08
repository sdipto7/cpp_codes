#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
int a;
cin >> a;
int maxHeight=a;
int c=1;
for (int i=1;i<n;i++){
  cin >> a;
  if (a>maxHeight){
    maxHeight=a;
  }else if(a==maxHeight){
  c++;
  }
}
cout << c << endl;
return 0;
}
