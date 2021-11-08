#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,sum1=0,c=0;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
  cin >> arr[i];
  sum+=arr[i];
}
sort(arr , arr+n);
sum=sum/2;
while(sum1<=sum){
  c++;
  sum1+=arr[n-c];
}
cout << c << endl;
return 0;}
