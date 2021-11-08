#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
  cin >> arr[i];
}
sort(arr,arr+n);
bool check[n];
int hide=0;
int l=n-1,r=n-1;
while(l<=r && l>=0){
  if(check[r]){
    r--;
  }
  if(arr[r]>=2*arr[l]){
    hide+=1;
    r--;
    l--;
    check[l]=true;
  }
  else {
    l--;
  }
}
cout << n-hide << endl;
return 0;
}
