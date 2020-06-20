#include <iostream>
using namespace std;

int memo[1000] = {0};

int fib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else if (memo[n] != 0){
    return memo[n];
  }
  memo[n] = fib(n - 2) + fib(n - 1);
  return memo[n];
}
int main() {
  int n = 30;
  cout << "n:30 =>" << fib(n) << endl;
  return 0;
}
