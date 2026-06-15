#include <stdio.h>

int main(){

    int a = 10;
    float b = 3;
    float soma1 = a + b; //'a' é convertido implicitamente para float
    float quociente = (float) a / b; //'a' é explicitamente convertido para float

    printf("Resultado Some: %.2f\n", soma1);
    printf("Resultado Divisao: %.2f\n", quociente);





    return 0;
}