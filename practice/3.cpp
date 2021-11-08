#include <iostream>
#include <string>

using namespace std;

class Planet {
private:
  string name;
public:
  Planet(){
  cout << "No Star" << endl;
  }
  Planet (string x){
  cout << x << endl;
  }
  void setName(string x){
  name=x;
  }
  string getName(){
  return name;
  }
};

int main(){
Planet p("SUN");
p.setName("PLUTO");
cout << p.getName();
return 0;
}
