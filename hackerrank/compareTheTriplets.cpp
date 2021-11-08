#include <iostream>
#include <cstring>

using namespace std;

int* compareTriplets(int a[],int b[]);

int main(){
int a[3];
int b[3];
for(int i=0;i<3;i++){
  cin >> a[i];
}
for(int i=0;i<3;i++){
  cin >> b[i];
}
int *p=compareTriplets(a,b);
cout << p[0] << " " << p[1] << endl;
return 0;
}

int* compareTriplets(int a[],int b[]){
  static int points[2];
  memset(points,0,sizeof(points));
  for(int i=0;i<3;i++){
    if(a[i]>b[i]){
      points[0]+=1;
    }else if(a[i]<b[i]){
    points[1]+=1;
    }
  }
  return points;
}
