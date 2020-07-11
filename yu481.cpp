#include <iostream>
using namespace std;

int main() {
  int b[9];
  for (int i = 0; i < 9; i++) {
    cin >> b[i];
    if (b[i] - b[i-1] != 1) {
      cout << b[i] - 1 << endl;
      continue;
    }
  }
  if (b[8] == 9){
    cout << 10 << endl;
  }
  return 0;
}
