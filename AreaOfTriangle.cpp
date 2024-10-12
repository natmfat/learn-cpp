#include <iostream>

using namespace std;

float area_of_triangle(int base, int height)
{
  return 0.5 * base * height;
}

int main()
{
  int base, height;
  cout << "Enter the base of the triangle > ";
  cin >> base;
  cout << "Enter the height of the triangle > ";
  cin >> height;
  float result = area_of_triangle(base, height);
  cout << "The area of the triangle with base " << base << " and height " << height << " is " << result << endl;
  return 0;
}
