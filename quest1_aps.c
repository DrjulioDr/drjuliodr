#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// GCC Versão 8.3.0-6
int main()
{
    char name[30], genero, jovem_nome[20];
    int idade, total, mais_jovem, maioria_m, maioria_f;
    total = 0;
    maioria_f = 0;
    maioria_m = 0;  
    while (1)
    {
        printf("\nQual seu nome? ");
        scanf("%s",name);
        printf("Informe seu Sexo. [Apenas M ou F]: ");
        scanf(" %c",&genero);
        printf("Com quantos começou a trabalhar? ");
        scanf(" %d",&idade);     
		sex = tolower(genero);
        if (sex == 'f'){
            if (idade < 16){
                maioria_f += 1;
            }
        }
        else{
            if (idade < 16){
                maioria_m += 1;
            }
        }
        
        if (total == 0){
            mais_jovem = idade;
            strcpy(jovem_nome, name);
        }
        else{
            if (idade < mais_jovem){
                mais_jovem = idade;
                strcpy(jovem_nome, name);
            }
        }
                total += 1;
        if (total == 3){
            break;
        }
    }
    printf("\nO funcionário que começou a atrabalhar mais jovem foi o %s, com %d anos", jovem_nome, mais_jovem);
    if (maioria_m > maioria_f){
        printf("\nA maior parte dos que começam a trabalhar antes dos 16 são Homens.");
    }
    if (maioria_f > maioria_m){
        printf("\nA maior parte dos que começam a trabalhar antes dos 16 são Mulheres.\n");
    }    
	printf("\nHomens: %d\nMulheres: %d",maioria_m, maioria_f);
    return 0;
}
