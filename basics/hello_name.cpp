#include <iostream>

using namespace std;

int main()
{
  string name;
  cout << "Hello, what is your name?" << endl;
  getline(cin, name);
  cout << "Hello, " << name << "!" << endl;
  return 0;
}