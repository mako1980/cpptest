#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (a == b) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
