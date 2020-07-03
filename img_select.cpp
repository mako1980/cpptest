#include <stdio.h>
#include <iostream>

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

  while(fgets(buf, sizeof(buf), fp)!=NULL) {
    line_n++;
  }
  printf("%d\n", line_n);
  while(fgets(buf, 32, fp)!=NULL) {
    printf("%s",buf);
  }
  fclose(fp);
  return 0;
}
