#include <iostream>

using namespace std;

int main() {
  int l, k;
  int r = 0;
  cin >> l >> k;
  while (l > (k * 2)) {
    l -= k * 2;
    r += k;
  }
  cout << r << endl;
  return 0;
}
