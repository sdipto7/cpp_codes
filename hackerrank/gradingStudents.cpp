#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
 for(int i=0;i<n;i++){
  cin >> arr[i];
  if(arr[i]>=38){
    int mod = arr[i] % 5;
    if(mod>=3){
      arr[i]+=(5-mod);
    }
  }
 }
 for(int x=0;x<n;x++){
  cout << arr[x] << endl;
 }
return 0;
}
