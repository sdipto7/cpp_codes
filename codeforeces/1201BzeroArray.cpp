#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
  cin >> arr[i];
}
for(int i=0,j=i+1;i<n-1,j<n ;){
  while(arr[i] !=0 && arr[j] != 0){
      arr[i]--;
      arr[j]--;
  }
  if(arr[i] == 0 && arr[j] == 0){
    i=j+1;
    j=i+1;
  }
   else if(arr[i]==0){
    i=j;
    j+=1;
  }else if (arr[j]==0){
    j+=1;
  }
}
bool zero=true;
for(int x=0;x<n;x++){
  if(arr[x] != 0){
    zero=false;
    cout << "NO" << endl;
    break;
  }
}

if(zero == true){
  cout << "YES" << endl;
}

return 0;
}
