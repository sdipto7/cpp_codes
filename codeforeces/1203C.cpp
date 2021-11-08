#include <iostream>
#include <cstring>

using namespace std;

int main(){
int n;
cin >> n;
int max=INT_MIN;
int arr[n];
for(int i=0;i<n;i++){
  cin >> arr[i];
  if(max < arr[i]){
    max=arr[i];
  }
}
int count=0;
for(int d=1;d<max;d++){
    bool check=false;
    for(int i=0;i<n;i++){
      if(arr[i]%d == 0){
        check = true;
      }else{check=false;break;}
    }
    if (check == true) count++;
}
cout << count << endl;



return 0;}
