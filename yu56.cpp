#include <iostream>
#include <string>

using namespace std;

int main() {
  int d, p;
  cin >> d >> p;
  cout << (int)(d * (0.01 * p) + d) << endl;
  return 0;
}
