#include <iostream>

using namespace std;

unsigned int fact(int n)
{
  if (n < 1)
    return 1;
  else
    return n*fact(n-1);

int main()
{
  unsigned int i;
  cin >> i;
  cout << "Factorial: " << fact(i) << endl;
  return 0;
}
