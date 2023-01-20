#ifndef _BYTE_H_
#define _BYTE_H_

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// 250 интов  это 205 * 32 бита = 8000 бит
int bit_vector[250];

int get_row();
int get_col();

bool is_set_bit(int number, int index);
bool set_bit(int number, int index);
bool inverse_bit(int number, int index);
bool reset_bit(int number, int index);

#endif  //  _BYTE_H_