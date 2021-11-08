#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int s,t,a,b,m,n;
cin >> s;
cin >> t;
cin >> a;
cin >> b;
cin >> m;
cin >> n;
int apple=0;
int orange=0;
for(int i=1;i<=m;i++){
  int x;
  cin >> x;
  x+=a;
  if(x>=s && x<=t){
    apple++;
  }
}
for(int i=1;i<=n;i++){
  int y;
  cin >> y;
  y+=b;
  if(y<=t && y>=s){
    orange++;
  }
}
cout << apple << "\n" << orange << endl;

return 0;
}
