#include<stdio.h>
int main()
{
    int integer;
    float float_number;
    double doubletype_number;
    char character;
    printf("Size of int: %zu bytes\n", sizeof(integer));
    printf("Size of float: %zu bytes\n", sizeof(float_number));
    printf("Size of double: %zu bytes\n", sizeof(doubletype_number));
    printf("Size of char: %zu byte\n", sizeof(character));
  
    return 0;
}
