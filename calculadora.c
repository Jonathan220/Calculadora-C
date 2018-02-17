#include <stdio.h>
//17/02/2018
//Autor Jonathan Abreu
//Interface de exibição da calculadora

void menu(float x){
	printf("\n\tCALCULADORA\n");
	printf("\nResultado: %2.f", x);
	printf("\n\n1 - Soma");
	printf("\n2 - Subtração");
	printf("\n3 - Multiplicação");
	printf("\n4 - Divisão");
	printf("\n5 - Sair");
}

int main(int argc, char const *argv[])
{
	float entrada = 0;
	int condicao = 1;
	while(condicao){
		menu(entrada);
		printf("\nOpção: ");
		scanf("%d", &condicao);
		//Toda opção deverá retornar um valor para 
		//'entrada'
		//entrada só é renicializada quando o programa
		//é executado pela primeira vez
		//condicao só deve ser setada na primeira execução
		// e no default so switch
		switch (condicao){
			case 1:
				entrada = 2;
				break;
			case 5:
				condicao = 0;
				break;
			default:
				printf("Opção incorreta!!!\n");
		}//fim so switch
	}//fim do while
	return 0;
}//fim da função main