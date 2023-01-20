#ifndef _BYTE_H_
#define _BYTE_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_set_bit(int number, int index);
bool set_bit(int number, int index);
bool inverse_bit(int number, int index);
bool reset_bit(int number, int index);

#endif  //  _BYTE_H_