#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, num = 479001599, cont = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
      
    }
      if (cont == 2)
        {
            printf("� primo\n");
        }
        else
        {
            printf("N�o � primo\n");
        }
    return 0;
}

