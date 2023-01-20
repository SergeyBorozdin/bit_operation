#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "byte.h"

#define MAX_DIGITS 8000

void generation_digits(int numbers[]) {
  for (int i = 0; i < MAX_DIGITS; i++) {
    numbers[i] = rand() % MAX_DIGITS;
  }
}

void print_duplicates(int *numbers) {
  int k = 0;
  // 250 интов  это 205 * 32 бита = 8000 бит
  int readed_bit_vector[250];

  for (int i = 0; i < numbers[MAX_DIGITS - 1]; i++) {
    if (is_set_bit(readed_bit_vector, numbers[i] - 1)) {
      printf("\t%d - %d\n", ++k, numbers[i]);
    } else {
      set_bit(readed_bit_vector, numbers[i] - 1);
    }
  }
}

int main() {
  int numbers[MAX_DIGITS];
  generation_digits(numbers);
  print_duplicates(numbers);
  return 0;
}