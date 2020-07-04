#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, k;
  int sum = 0;
  cin >> n >> k;
  if (n == k) {
    cout << "Drew" << endl;
    return 0;
  } else {
  }
  switch(n){
    case 0:
      if(k == 1){
        cout << "Won" << endl;
      } else {
        cout << "Lost" << endl;
      }
      break;
    case 1:
      if(k == 2){
        cout << "Won" << endl;
      } else {
        cout << "Lost" << endl;
      }
      break;
    case 2:
      if(k == 0){
        cout << "Won" << endl;
      } else {
        cout << "Lost" << endl;
      }
      break;
    default:
      break;
  }
  return 0;
}
