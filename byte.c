#include "byte.h"

// int STATE = 7;

/*
    отражает совпадение битов в двоичной записи
*/
// void func_byte(int(flag)) {
//   if (flag & STATE != 0) {
//     printf("1 - STATE\n");
//   }
// }

/*
    проверка бита
*/
bool is_set_bit(int number, int index) { return (number & (1 << index)) != 0; }

/*
    установка бита в 1
*/
bool set_bit(int number, int index) { return number | (1 << index); }

/*
    инверсия бита
*/
bool inverse_bit(int number, int index) { return number ^ (1 << index); }

/*
    установкака бита в 0
*/
bool reset_bit(int number, int index) { return number & ~(1 << index); }

/*
    возвращает номер строки в битовом векторе
*/
int get_row(int bit) {
  return (int)Math.floor(bit >> 4);
}  // Math.floor почитай это что, 24 минута

/*
    возвращает номер столбца в битовом векторе
*/
int get_col(int bit) { return bit % 16; }

// int main() {
//   int STATE_1 = 1;
//   int STATE_2 = 2;
//   int STATE_3 = 4;
//   func_byte(STATE_1 | STATE_2 | STATE_3);
//   return 0;
// }
