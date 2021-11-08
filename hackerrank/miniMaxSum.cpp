#include <bits/stdc++.h>

using namespace std;

int main(){
long int arr[5];
long int minimum=1000000000;
long int maximum=0;
long int sum=0;
for(int i=0;i<5;i++){
  cin >> arr[i];
  sum+=arr[i];
  if(minimum > arr[i]){
    minimum = arr[i];
  }
  if(maximum < arr[i]){
    maximum = arr[i];
  }
}

cout << sum-maximum << " " << sum-minimum << endl;

return 0;
}
