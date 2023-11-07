#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float precofinal, desconto, precodacompra;
    int dia;
    printf("Dias da Semana\nSegunda | 1\nTerça | 2\nQuarta | 3\nQuinta | 4\nSexta | 5\nSabado | 6\nDomingo | 7\n");
    printf("Digite um dos numeros acima como opção: ");
    scanf("%d",&dia);
    printf("Digite o preço da compra: ");
    scanf("%f", &precodacompra);
    fflush(stdin);

   
    if (precodacompra > 100)
    {

        switch (dia)
        {
        case 1:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 2:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 3:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 4:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 5:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 6:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;
        case 7:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;

        default:
            break;
        }
    }
    else
    {
        precofinal = precodacompra;
    }
    printf("\nPreço final R$:%.2f",precofinal);
    return 0;
}

