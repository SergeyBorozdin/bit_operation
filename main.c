#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 8000

void generation_digits(int numbers[]) {
  for (int i = 0; i < MAX_DIGITS; i++) {
    numbers[i] = rand() % MAX_DIGITS;
  }
}

void print_duplicates(int numbers[]) {
  bool reader[MAX_DIGITS];
  int k = 0;
  for (int i = 0; i < numbers[MAX_DIGITS - 1]; i++) {
    if (reader[numbers[i] - 1] == true) {
      printf("\t%d - %d\n", ++k, numbers[i]);
    } else {
      reader[numbers[i] - 1] = true;
    }
  }
}

int main() {
  int numbers[MAX_DIGITS];
  generation_digits(numbers);
  print_duplicates(numbers);
  return 0;
}