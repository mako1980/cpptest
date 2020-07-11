#include <iostream>
#include <string>

using namespace std;

int main() {
  int r = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (isdigit(s[i])) {
      r += (int)s[i] - '0';
    }
  }
  cout << r << endl;
  return 0;
}
