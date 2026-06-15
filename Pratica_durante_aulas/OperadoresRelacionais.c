#include <stdio.h>

int main (){

    int a = 20;
    int b = 20;

    //primeira parte da aula
    printf("a > b: %d \n", a > b);
    printf("a < b: %d \n", a < b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d \n", a != b);
    printf("a >= b: %d \n", a >= b);
    printf("a <= b: %d \n", a <= b);
    printf("-----\n");

    //segunda parte da aula

    int x = 5;
    float y = 5.0;

    printf("x >= y: %d \n", x >= y);
    printf("x == y: %d \n", x == y);
    printf("x != y: %d \n", x != y);
    printf("-----\n");

    //terceira parte da aula - conversao implicita

    char c = 'a';

    printf("x >= c: %d \n", x >= c);
    printf("O valor ASCII de %c é: %d \n", c, c);
    printf("-----\n");

    //quarta parte da aula - conversao explicita

    float num1 = 10.2;
    int num2 = 10;

    printf("num1 > num2: %d \n", (int)num1 > num2);
    printf("num1 == num2: %d \n", (int)num1 == num2);




    return 0;
}