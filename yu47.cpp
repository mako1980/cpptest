#include <iostream>
using namespace std;

int main() {
  int n;
  int a = 1;
  int c = 0;
  cin >> n;
  while (n > a) {
    a *= 2;
    c++;
  }
  cout << c << endl;
  return 0;
}
