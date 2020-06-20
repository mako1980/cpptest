#include <iostream>

using namespace std;

int main() {
  // string s;
  // cin >> s;
  char a;
  char* p;
  p = &a;
  cout << "p:" << (size_t)p << endl
       << "a:" << (size_t)&a << endl;
  return 0;
}
