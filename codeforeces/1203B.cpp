#include <iostream>
#include <cstring>

using namespace std;

int main(){
int q;
cin >> q;
int a=1;
while (a<=q){
  int rec;
  cin >> rec;
  int arr[4*rec];
  memset(arr,0,4*rec);
  for(int i=0;i<4*rec;i++){
   cin >> arr[i];
  }
  int count=0;
  for(int i=0;i<4*rec;i++){
    for(int j=i+1;j<4*rec;j++){
      if(arr[i]==arr[j]){
        count++;
      }
    }
  }
  if(count % 2 == 0) cout << "YES"<<endl;
  else cout << "NO" << endl;
  a++;
}
return 0;}
