#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int menu;

    printf ("1- Novo jogo\n");

    printf ("2- Carregar jogo\n");

    printf ("3- Configurações\n");

    printf ("Esolha uma opção:");
    scanf ("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Carregando novo jogo...");
        break;
    case 2:
        printf("Carregando o ultimo save...");
        break;
    case 3:
        printf("Abrindo configurações...");
        break;
    }
    return 0;
}