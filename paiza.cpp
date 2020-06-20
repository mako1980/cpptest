#include <iostream>
using namespace std;

int main() {
  int n;
  string s1, s2;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;
  }
  return 0;
}
