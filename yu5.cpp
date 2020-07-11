#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int l, n, a;
  int r = 0;
  cin >> l >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int i = 0; l > 0 && i < n; i++) {
    cout << "l:" << l << endl;
    l -= v[i];
    cout << "l:" << l << endl;
    if (l >= 0){
      r++;
    }
  }
  cout << r << endl;
  return 0;
}
