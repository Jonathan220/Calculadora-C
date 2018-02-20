
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
	printf("\n5 - Limpar resultado");
	printf("\n6 - Sair");
}

float soma(float s){
	
	float total = s;
	float entr = 1;

	while(entr >= 1){
		printf("Para encerrar digite um número negativo: \n");
		printf("Insira o valor:");
		scanf("%f", &entr);
		if(entr>=0)
			total += entr;
	}

	return total;
}

int main(int argc, char const *argv[])
{

	float entrada = 0;
	int condicao = 0;
	
	while(condicao >= 0){
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
				entrada = soma(entrada);
				break;
			case 5:
				entrada = 0;
				break;
			case 6:
				condicao = -1;
				break;
			default:
				printf("Opção incorreta!!!\n");
		}//fim do switch
	
	}//fim do while
	return 0;
}//fim da função main