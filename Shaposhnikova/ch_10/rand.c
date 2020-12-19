/*
Напишите программу, в которой целочисленной переменной присваивается результат выполнения функции rand(). 
Выведите значение переменной на экран. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    
    r = rand();
    printf("rand = %d \n", r);
    
    r = rand();
    printf("rand = %d \n", r);
    
    r = rand();
    printf("rand = %d \n", r);
    
    return 0;  
}