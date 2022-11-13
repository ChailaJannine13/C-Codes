#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{
  cout << "Hello ";
  cout.flush();
  sleep(10);
  cout << "World";
  cout << endl;
   
  return 0;
}
