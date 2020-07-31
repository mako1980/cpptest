#include <iostream>

using namespace std;

int main() {
  int n, h, m, t;
  cin >> n >> h >> m >> t;
  for (int i = 0; i < n - 1; i++) {
    h += t / 60;
    m += t % 60;
    h += m / 60;
    m = m % 60;
    if (h > 23) {
      h -= 24;
    }
  }
  cout << h << endl;
  cout << m << endl;
  return 0;
}
