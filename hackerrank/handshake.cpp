#include <iostream>

using namespace std;

int main(){
int t;
cin >> t;
for(int i=1;i<=t;i++){
  int n;
  cin >> n;
  int x = n * (n - 1);
  cout << x/2 << endl;
}
return 0;
}
