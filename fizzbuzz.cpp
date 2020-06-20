#include <iostream>
//#include <string>

using namespace std;

int main() {
  int i;
  int sum = 0;
  int n;
  cin >> n;

  for (i = 0; i < n; i++){
    if ((i+1)%15 == 0){
      cout << "FizzBuzz" << endl;
    } else if ((i+1)%3 == 0){
      cout << "Fizz" << endl;
    } else if ((i+1)%5 == 0){
      cout << "Buzz" << endl;
    } else {
      cout << i+1 << endl;
    }
  }
  return 0;
}
