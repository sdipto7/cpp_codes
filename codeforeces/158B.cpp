#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++) {
    cin >> arr[i];
    }
sort(arr,arr+n);
int l=0,r=n-1;
int c=0;
while(l<=r){
    if(l==r){
      c++;
      break;
    }
  if(arr[r]==4){
    r--;
    c++;
  }
  else if(arr[r]+arr[l]<=4){
    c++;
    r--;
    l++;
  }else{
  r--;
  l++;
  c+=2;
  }
}
cout << c << endl;
return 0;}
