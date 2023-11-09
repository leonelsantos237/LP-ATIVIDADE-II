#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, par = 0, impar = 0, quantidade = 0;
    float mediapar, mediaimpar;

    do
    {
        printf("Digite o %d Numero: ", quantidade + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            par++;
            mediapar += numero;
        }
        else
        {
            impar++;
            mediaimpar += numero;
        }
        quantidade++;
    } while (numero > 0);
    mediapar = mediapar / par;
    mediaimpar = mediaimpar / impar;
    
    printf("\nQuantidade de numeros Pares: %d\n", par);
    printf("Quantidade de numeros Impares: %d\n", impar);
    printf("Media dos Numeros Pares: %.2f\n", mediapar);
    printf("Media dos Numeros Impares: %.2f\n", mediaimpar);
    
    return 0;
}
