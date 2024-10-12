#include <iostream>

using namespace std;

int sum_of_first_n(int n)
{
  return n * (n + 1) / 2;
}

int main()
{
  // explain program & get n
  int n;
  cout << "This program allows you to calculate the sum of the first 'n' natural numbers" << endl;
  cout << "Enter a number n > ";
  cin >> n;

  // calculate sum of first n natural numbers if n is greater than 0
  if (n >= 0)
  {
    int result = sum_of_first_n(n);
    cout << "The sum of the first " << n << " natural numbers is " << result << "." << endl;
    return 0;
  }

  // otherwise, print "error"
  cout << "n must be a positive number!" << endl;
  return 0;
}