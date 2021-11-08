#include <bits/stdc++.h>

using namespace std;

int main(){
int n,a,b;
int sum=0,alt=0;
cin >> n;
for(int i=0;i<n;i++){
  cin >> a >> b;
  alt=alt-a+b;
  if(alt>sum){
    sum=alt;
  }
}
cout << sum << endl;
return 0;}
