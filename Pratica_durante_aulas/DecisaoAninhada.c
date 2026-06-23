#include <stdio.h>

int main (){
    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
        printf("A sua idade (%d anos) atende os requisitos. \n", idade);
        if (renda < 2000)
        {
            printf("Sua renda (R$%.1f) também atende aos requisitos. \n", renda);
            printf("Você tem direito ao desconto! \n");
        } else
        {
            printf("Sua renda (R$%.1f) não atende aos requisitos. \n", renda);
            printf("Você NAO tem direito ao desconto! \n");
        }
    } else
    {
        printf("A sua idade (%d anos) não atende os requisitos. \n", idade);
        printf("Você NAO tem direito ao desconto! \n");
    }

    return 0;
}