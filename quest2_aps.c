#include <stdlib.h>
#include <stdio.h>
// GCC Versão 8.3.0
int main()
{
	double brasil, eua;
	int contador, ano;
	brasil = 187274412.00;
	america = 299902694.00;
	contador = 0;
	while(1){
		brasil = brasil * 1.04;
		america = america * 1.02;
		contador += 1;
		if (brasil >= america){
			break;
			}
	}
	ano = 2008 + contador;
	printf("\nContador: %d.\nEua: %f\nBra: %f", contador, america, brasil);
	printf("\nO ano será %d.\n", ano);
	return 0;
}
