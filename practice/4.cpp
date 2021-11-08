/*
#include <iostream>
using namespace std;

int main ()
{
   string texts[] = {"Apple", "Banana", "Orange", ""};
   for( unsigned int a = 0; texts[a].length(); a = a + 1 )
   {
       cout << "value of a: " << texts[a] << endl;
   }

   return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main ()
{
   string texts[] = {"Apple", "Banana", "Orange"};
   for(int a = 0; a < sizeof(texts); a = a + 1)
   {
       cout << "value of a: " << texts[a] << endl;
   }

   return 0;
}
*/

#include<iostream>

using namespace std;

int main () {
int a[10];
cout << sizeof(a)/sizeof(*a) << endl;
return 0;
}
