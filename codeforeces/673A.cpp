#include <iostream>

using namespace std;

int main(){
int x=0,n;
cin >> n;
for(int i=0;i<n;i++){
  int m;
  cin >> m;
  if (x<m && m<=x+15) {
          x = m;
  }
}
if (x+15<=90) {
      x += 15;
  }else if(x+15>90){
      x=90;
}
cout << x << endl;

return 0;
}
