#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float graus;

    printf("Qual a temperatura?");
    scanf("%f", &graus);

    if (graus > 25)
    {

        printf("O clima est� ensolarado! \n");
    }

    if (graus < 15)
    {

        printf("O clima est� chuvoso \n");
    }

    if (graus >= 15 && graus <= 25)
    {

        printf("O clima est� nublado");
    }

    return 0;
}