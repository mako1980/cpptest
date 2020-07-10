#include <iostream>
using namespace std;

int main() {
  char hello[] = "Hello!";
  cout << hello << endl;
  cout << sizeof hello << endl;
  cout << (int)sizeof hello << endl;
  cout << hello[0] << endl;
  //for(int i = 0; i < (int)sizeof hello; ++i){
  //  cout << (int)(unsigned char)hello[i] << ", ";
  //}
  for(int i = 0; hello[i] != '\0'; ++i){
    cout << (int)(unsigned char)hello[i] << ", ";
  }
  cout << endl;
  return 0;
}
