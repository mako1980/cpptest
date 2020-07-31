#include <iostream>

using namespace std;

int main() {
  int n, h, m, t;
  cin >> n >> h >> m >> t;
  cout << ((m+(n-1)*t)/60+h)%24 << endl;
  cout << (m+(n-1)*t)%60 << endl;
  return 0;
}
