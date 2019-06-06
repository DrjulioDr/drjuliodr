#include <stdio.h>
#include <string.h>
// GCC Versão 8.3.0-6
int main()
{
    double sal;
    char nome[15], sexo[10] = "F", homem[10], mulher[10];
    int days, func, media, total;
    func = 0;
    media = 0;
    total = 0;
    strcpy(homem,"M");
    strcpy(mulher,"F");
    while (1)
    {    
        printf("\nInforme seu nome: ");
        scanf(" %s", nome);
        getchar();
        printf("Informe seu sexo [M ou F apenas]:\n");
        scanf(" %c", sexo);
        getchar();
        printf("Informe o seu salário:\n");
        scanf("%lf", &sal);
        getchar();
        printf("Informe os dias trabalhados no último mês: \n");
        scanf("%d", &days);
        getchar();
        func += 1;
        if (strcmp(sexo, homem) == 0)
        {
            if (sal > 1200)
            {
                printf("Você já não tem mais direito ao plano de saúde, lamento...\n");
            }
            else
            {
                printf("Você precisa de um aumento de R$%.2f para perder o plano de saúde\n", 1200-sal);
            }
        }
        else{
            if (sal > 1500)
            {
                printf("Você já não tem mais direito ao plano de saúde, lamento...\n");
            }
            else
            {
                printf("Você precisa de aumento de R$%.2f para perder o plano de saúde\n", 1500-sal);
            }
 
        }        
        if (sal <= 900)
        {
            total = days*15;
            printf("\nVocê receberá %d$ em tickets", total);
            media += total;
        }
        else if (sal > 900)
        {
            total = days*10;
            printf("Você receberá %d$ em tickets", total);
            media += total;
        }        
        if (func == 500)
        { 
            break;
        }
    }
    printf("\nO número total de funcionários é de: %d", func);
    printf("\nA média gasta em Tickets é de R$%d", media/func);
    printf("\nO total gasto em Tickets é de R$%d", media);    
    return 0;
}
