#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    setlocale(LC_ALL, "portuguese");

    int num, i, resultado;

    // Solicita ao usuário o número para a tabuada
    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &num);

    // Imprime a tabuada de 1 a 10 do número fornecido
    printf("Tabuada de %d:\n", num);
    for (i = 1; i <= 10; i++) 
    {
        resultado = num * i;
        printf("%d x %d = %d\n", num, i, resultado);
    }

    return 0;
}
