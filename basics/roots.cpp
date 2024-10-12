#include <iostream>

using namespace std;

int main()
{
  // explain program & get data
  int a, b, c;
  cout << "This program allows you to caculate the roots of ax^2 + bx + c = 0." << endl;
  cout << "Enter values for a, b, and c > ";
  cin >> a >> b >> c;

  // calculate roots
  float root_1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  float root_2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  cout << "The roots are x = " << root_1 << " and x = " << root_2 << endl;

  return 0;
}