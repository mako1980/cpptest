#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  FILE *fp;
  char buf[32];
  int line_n = 0;

  fp = fopen("img_list.txt", "r");
  if (fp==NULL) {
    printf("Error.File can not opened.\n");
    return -1;
  }

  // ファイル行数取得
  while(fgets(buf, sizeof(buf), fp)!=NULL) {
    line_n++;
  }
  // printf("%d\n", line_n);
  string arr[line_n];
  // ファイルの先頭へ
  rewind(fp);
  for (int i = 0; i < line_n; i++) {
    arr[i] = fgets(buf, sizeof(buf), fp);
  }

  string s;
  for (int i = 0; i < line_n; i++) {
    s = arr[i];
    cout << s << endl;
    if (s == "IMG_050429_134910.JPG\n"){
      cout << "then" << endl;
    } else {
      cout << "else" << endl;
    }
  }
  fclose(fp);
  return 0;
}
