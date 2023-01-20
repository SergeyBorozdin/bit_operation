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

/*
    проверка бита
*/
bool is_set_bit(int number, int index) {}

/*
    установка бита в 1
*/
bool set_bit(int number, int index) {}

/*
    инверсия бита
*/
bool inverse_bit(int number, int index) {}

/*
    установкака бита в 0
*/
bool reset_bit(int number, int index) {}

int main() {
  int STATE_1 = 1;
  int STATE_2 = 2;
  int STATE_3 = 4;
  func_byte(STATE_1 | STATE_2 | STATE_3);
  return 0;
}
