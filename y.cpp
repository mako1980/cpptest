#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, a;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  //for (int i = 0; i < n; i++) {
  //  cout << v[i] << endl;
  //}
  sort(v.begin(), v.end());
  if ((n % 2)==0){
    cout << (v[(n/2)-1] + v[(n/2)]) /2.0 << endl;
  } else {
    cout << v[n / 2] << endl;
  }
  //for (int i = 0; i < n; i++) {
  //  cout << v[i] << endl;
  //}
  return 0;
}
