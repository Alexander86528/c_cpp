#include <stdio.h>
#include <stdlib.h>
#include "bit_utils.h"

void clear_input_buffer(void){
  int c;
  while((c = getchar()) != '\n' && c != EOF){
  }
}

int get_bit_position(void){
  int i;
  int valid = 0;
  int result;

  do{
    printf("введите i = ");
    fflush(stdout);

    result = scanf("%d", &i);
    if(result == EOF){
      printf("\nВвод прерван, выход из программы\n");
      exit(EXIT_FAILURE);
    } else if(result != 1){
      clear_input_buffer();
      printf("Ошибка ввода! \n");
      printf("Введите десятичное число от 0 до 7 включительно \n");
    } else if(i >= 0 && i <= 7){
      valid = 1;
    } else {
      printf("Ошибка! \n");
      printf("Введите число от 0 до 7 включительно \n");
    }
  } while(!valid);

  return i;
}

void print_binary(unsigned char value){
  int bit;
  for(bit = 7; bit >= 0; bit--){
    putchar((value >> bit) & 1 ? '1' : '0');
    if((bit % 4 == 0) && (bit != 0)){
      putchar(' ');
    }
  }
  printf("\n");
}

/*
Ввод числа, в котором устанавливается единичный бит
по маске, с контролем правильности ввода и диапазона.
*/
int input_number(void){
  int a;
  int valid = 0;
  int result;

  do {
    printf("ch = ");
    fflush(stdout);

    result = scanf("%d", &a);
    if(result == EOF){
      printf("Ввод числа прерван Ctrl+D \n");
      exit(EXIT_FAILURE);
    } else if(result != 1){
      clear_input_buffer();
      printf("Ошибка ввода! \n");
      printf("Введите десятичное число \n");
    } else if(a >= 0 && a <= 127){
      valid = 1;
    } else {
      printf("Ошибка! \n");
      printf("Введите число в диапазоне от 0 до 127 включительно \n");
    }
  } while(!valid);

  return a;
}

