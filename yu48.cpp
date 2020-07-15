#include <iostream>
using namespace std;

int main() {
  int x, y, l;
  int cnt = 0;
  cin >> x >> y >> l;

  if (x!=0 || y!=0){

    if (y < 0) {
      cnt = 2;
    } else {
      if (x == 0){
        cnt = 0;
      } else {
        cnt = 1;
      }
    }

    if (x < 0) {
      x *= -1;
    }
    if (y < 0) {
      y *= -1;
    }
    if ((x%l) == 0){
      cnt += (x/l);
    } else {
      cnt += ((x/l) + 1);
    }
    if ((y%l) == 0){
      cnt += (y/l);
    } else {
      cnt += ((y/l) + 1);
    }
  }

  cout << cnt << endl;
  return 0;
}
