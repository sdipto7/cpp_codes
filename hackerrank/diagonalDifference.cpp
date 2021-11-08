/*
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n][n];
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin >> arr[i][j];
  }
}
int a=0,b=0;
for(int x=0;x<n;x++){
  a+=arr[x][x];
}
for(int y=n-1,x=0;y>=0;y--){
  b+=arr[x++][y];
}
cout << abs(a-b) << endl;
return 0;
}
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int n;
cin >> n;
int arr[n][n];
int a=0,b=0;
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin >> arr[i][j];
    if(i==j){
      a+=arr[i][j];
    }
    /*
    else if(i+j == n-1){
    b+=arr[i][j];
    }
    if I use else if here then for the centre value (1,1) it does not add with b or sum of second diagonal.
      if I use if instead then both the condition is checked at (1,1) and both the sum of diagonal gets the middle value.
      1 2 3
      4 5 6
      9 8 9
      here 5 is the middle value which is (1,1). it satisfies the first condition and also the second condition.
      if we use else if then one condition is checked then the loop continues. but we need both the condition.
      so we use both the condition as "if"
    */
    if(i+j == n-1){
    b+=arr[i][j];
    }
  }
}
cout << abs(a-b) << endl;
}
