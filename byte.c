#include "byte.h"

/*
    проверка бита
*/
bool is_set_bit(int *bit_vector, int index) {
  int index_row = get_row(index);
  int index_col = get_col(index);
  return (bit_vector[index_row] & (1 << index_col)) != 0;
}

/*
    установка бита в 1
*/
void set_bit(int *bit_vector, int index) {
  int index_row = get_row(index);
  int index_col = get_col(index);
  return bit_vector[index_row] |= 1 << index_col;
}

/*
    инверсия бита
*/
bool inverse_bit(int *bit_vector, int index) {
  int index_row = get_row(index);
  int index_col = get_col(index);
  return bit_vector[index_row] ^= 1 << index_col;
}

/*
    установкака бита в 0
*/
bool reset_bit(int *bit_vector, int index) {
  int index_row = get_row(index);
  int index_col = get_col(index);
  return bit_vector[index_row] &= ~(1 << index_col);
}

/*
    возвращает номер строки в битовом векторе
*/
int get_row(int bit) { return (int)floor(bit >> 4); }

/*
    возвращает номер столбца в битовом векторе
*/
int get_col(int bit) { return bit % 16; }
