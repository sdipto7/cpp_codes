#include <iostream>
#include <cstring>

using namespace std;

int main (){
int n;
cin >> n;
int arr[n+1];
for(int i=1;i<n+1;i++){
  cin >> arr[i];
}
bool check[n+1];
int count=0;
memset(check,false,n+1);
for(int i=1;i<n+1;i++){
  if(check[i]==false){
    check[i]=true;
    count++;
  }else{
   if(check[arr[i]+1]==false){
    check[arr[i]+1]=true;
    count++;
   }else if (arr[i]-1>0 && check[arr[i]-1]==false){
   check[arr[i]-1]=true;
   count++;
   }
  }
}
cout << count << endl;

return 0;}
