#include <iostream>
#include <string>

using namespace std;

int main() {
  int k, n, f, a;
  int sum = 0;
  cin >> k >> n >> f;
  for (int i = 0; i < f; i++) {
    cin >> a;
    sum = sum + a;
  }
  if (k * n < sum) {
    cout << -1 << endl;
  } else {
    cout << k * n - sum << endl;
  }
  return 0;
}
