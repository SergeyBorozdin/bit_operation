#include "byte.h"

int STATE = 7;

/*
    отражает совпадение битов в двоичной записи
*/
void func_byte(int(flag)) {
  if (flag & STATE != 0) {
    printf("1 - STATE\n");
  }
}

int main() {
  int STATE_1 = 1;
  int STATE_2 = 2;
  int STATE_3 = 4;
  func_byte(STATE_1 | STATE_2 | STATE_3);
  return 0;
}
