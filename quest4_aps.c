#include <stdio.h>
// GCC Versão 8.3.0
int main(){
    int ano, joao;
    ano = 2008;
    joao = 80000;
    while (1)
    {
        joao *= 1.08;
        ano += 1;
        if (joao >= 160000)
        {
            break;
        }
        
    }
    printf("O ano será %d\nJoão terá: %d", ano, joao);
    return 0;
}
