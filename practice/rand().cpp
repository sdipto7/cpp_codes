#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  //srand(123543);
  srand(time(0));
for(int i=0;i<25;i++){
  cout << 1+(rand()%6) << endl;
}
return 0;
}
