// um programa para coisar e descoisar o treco!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ql 26

void coisa(char treco[], int num) 
{
    printf("\nNumero = %d",num);
	for (int i = 0; i < strlen(treco); i++) 
	{
        if (treco[i] >= 'a' && treco[i] <= 'z') 
		{
            treco[i] = 'a' + (treco[i] - 'a' + num) % ql;
        } 
		else if (treco[i] >= 'A' && treco[i] <= 'Z') 
		{
            treco[i] = 'A' + (treco[i] - 'A' + num) % ql;
        }
    }
}
void descoisa(char treco[], int num) 
{
    coisa(treco, ql - num); 
}
main() 
{
    char treco[1000]; int op, num;

    printf("\nDigite um treco com letras: "); 
	fgets(treco,sizeof(treco),stdin);

    printf("\n\n1. Coisar");
    printf("\n2. Descoisar\n-> ");
    scanf("%d",&op);

    do
	{
		printf("\nDigite um numero positivo: ");
    	scanf("%d",&num);
	}while(num<1);

    switch(op) 
	{
        case 1:
            coisa(treco,num);
            printf("\nTreco coisado: %s\n", treco);
            break;
        case 2:
            descoisa(treco,num);
            printf("\nTreco descoisado: %s\n", treco);
            break;
        default:
            printf("\nOpção inválida!\n");
    }
}

