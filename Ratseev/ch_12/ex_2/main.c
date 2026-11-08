#include <stdio.h>
#include "bit_utils.h"

int main(void){
  unsigned char value = 0;
  int ch;
  int i;

  printf("Установка единичного бита в указанную позицию \n");
  i = get_bit_position();
  printf("Введено корректное значение %d \n", i);

  value |= (1 << i);
  printf("Маска установки бита %d (0x%02x) \n", value, value);

  print_binary(value);

  printf("Установка единичного бита по маске в заданное число \n");
  ch = input_number();
  printf("Введено число %d \n", ch);
  print_binary(ch);
  ch |= (1 << i);
  print_binary(ch);

  return 0;
}

