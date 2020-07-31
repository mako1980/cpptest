#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  string befo = "treeone";
  string aft = "forest";
  int pos = 0;
  int len = befo.length();
  while ((pos = s.find(befo, pos)) != -1) {
    s.replace(pos, len, aft);
    pos += aft.length();
  }
  cout << s << endl;

  return 0;
}
