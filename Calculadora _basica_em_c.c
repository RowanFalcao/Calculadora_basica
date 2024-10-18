#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int num1, num2;
    char operador;

    printf("Insira dois numeros inteiros!\n");
    scanf("%d %d", &num1, &num2);


    printf("Insira o operador desejado '+', '-', '*', '/', '%%': \n");
    scanf(" %c", &operador);


    switch (operador)
    {
        case '+':
            printf("O resultado da soma eh: %d\n", num1 + num2);
            break;

        case '-':
            printf("O resultado da subtracao eh: %d\n", num1 - num2);
            break;

        case '*':
            printf("O resultado da multiplicacao eh: %d\n", num1 * num2);
            break;

        case '/':  if (num2 != 0){
            printf("O resultado da divisao eh: %.2f\n", (float)num1 / num2);
            } else {
            printf("Imporssivel dividir por ZERO!\n");
            }
            break;

        case '%':
            printf("O resto da divisao eh: %.2f\n", (float)(num1 % num2));
            break;

        default:
            printf("Valor invalido!\n");
            break;

    }    
    
    
    
    return 0;
}
