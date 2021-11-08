#include "PLANET.h"
#include<iostream>
#include <string>

using namespace std;

PLANET::PLANET()
{
  cout << "It's working";
}
PLANET::setName(string x){
PLANET::name=x;
}
PLANET::getName(){
return PLANET::name;
}
