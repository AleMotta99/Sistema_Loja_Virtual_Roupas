#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define a 2

typedef struct
{
    char Tipo[10], Genero[3], Tecido[10], Cor[20], Marca[10], Tamanho;
    int  Quantidade, CodigoPeca;
    float Preco, PrecoFabricacao;
}
Roupa;

void Cadastrar_Roupa(Roupa Dados_Roupa[a])
{

	int i;
	for(i = 0; i < a;i++)
        {
        system("cls");
        printf("\n\n Digite o tipo do produto: \n");
        printf("\n Op��es : Bl - Blusa    C - Cal�a    Be - Bermuda   Sh - Short    V - Vestido   Sa - Saia\n\n");
        scanf("%s", Dados_Roupa[i].Tipo);

        fflush(stdin);
        printf("\n Digite o g�nero ao qual o produto se destina: \n");
        printf("\n M - Masculino  F - Feminino\n\n");
        scanf("%s", Dados_Roupa[i].Genero);

        fflush(stdin);
        printf("\n Digite a quantidade de produtos dispon�veis: \n\n");
        scanf("%d",&Dados_Roupa[i].Quantidade);

        fflush(stdin);
        printf("\n Digite o tamanho do produto: \n");
        printf("\n Op��es : G - Grande  M - M�dio  P - Pequeno \n\n");
        scanf("%c", &Dados_Roupa[i].Tamanho);

        fflush(stdin);
        printf("\n Digite o pre�o de venda do produto: \n\n");
        scanf("%f",&Dados_Roupa[i].Preco);

        fflush(stdin);
        printf("\n Digite o c�digo do produto: \n\n");
        scanf("%d",&Dados_Roupa[i].CodigoPeca);

        fflush(stdin);
        printf("\n Digite o custo de fabrica��o do produto: \n\n");
        scanf("%f", &Dados_Roupa[i].PrecoFabricacao);

        fflush(stdin);
        printf("\n Digite o tipo de tecido do produto: \n");
        printf("\n  Op��es :  A - Algod�o ou  P - Poli�ster  \n\n");
        scanf("%s", Dados_Roupa[i].Tecido);

        fflush(stdin);
        printf("\n Digite a cor do produto: \n");
        printf("\n Op��es : Am - Amarelo   Ver - Vermelho   R - Rosa   P - Preto   Br - Branco   Az - Azul \n\n");
        scanf("%s", Dados_Roupa[i].Cor);

        fflush(stdin);
        printf("\n Digite a marca do produto: \n");
        printf("\n Op��es : Gu - Gucci   Ad - Adidas   Ni - Nike   Z - Zara \n\n");
        scanf("%s", Dados_Roupa[i].Marca);

        }
}

void Consultar_Roupa(Roupa Dados_Roupa[a])
{

	printf("\n\n>>>>>>>>>> TABELA DE INFORMA��ES DAS ROUPAS CADASTRADAS <<<<<<<<<<<<<< \n\n");
	int i;

	for(i = 0; i < a; i++)
    {

        printf("\n Produto %d\n\n", i+1);
		printf("\n TIPO - %s \n", Dados_Roupa[i].Tipo);
		printf("\n G�NERO - %s \n", Dados_Roupa[i].Genero);
		printf("\n QUANTIDADE - %d \n", Dados_Roupa[i].Quantidade);
		printf("\n TAMANHO - %c \n", Dados_Roupa[i].Tamanho);
		printf("\n PRE�O - R$%.2f \n", Dados_Roupa[i].Preco);
		printf("\n C�DIGO - %.2d \n", Dados_Roupa[i].CodigoPeca);
		printf("\n PRE�O DE FABRICA��O - R$%.2f \n", Dados_Roupa[i].PrecoFabricacao);
		printf("\n TECIDO - %s \n", Dados_Roupa[i].Tecido);
		printf("\n COR - %s \n", Dados_Roupa[i].Cor);
		printf("\n MARCA - %s \n\n", Dados_Roupa[i].Marca);
		printf("\n");
	}
	system("pause");
}

int main(){

	int i, Opcao, Produto;
    int verifica = 0;

	Roupa Dados_Roupa[a];

    setlocale(LC_ALL,"");
    system("color 03");

    while(verifica != 4)
    {
        system("cls");
        printf("\n\n ***************** BEM VINDO A GEST�O DA LOJA *****************\n\n");
        printf("\n O que deseja fazer ?\n");
        printf("\n 1 - Cadastrar um produto\n");
        printf("\n 2 - Consultar produtos cadastrados\n");
        printf("\n 3 - Alterar um produto\n ");
        printf("\n 4 - Sair \n\n");
        scanf("%d", &verifica);

        if (verifica>4)
        {
            printf("\n>>>>>>>>>>>>>>>> OP��O INV�LIDA <<<<<<<<<<<<<<<<<<<\n\n\n ");
            system("pause");
        }

       switch(verifica){
			case 1:{

                Cadastrar_Roupa(Dados_Roupa);
				break;
			}

			case 2:{

				Consultar_Roupa(Dados_Roupa);
				break;
			}

            case 3:
            {

				printf("\n\n>>>>>>>>>> TABELA DE INFORMA��ES DAS ROUPAS CADASTRADAS <<<<<<<<<<<<<< \n\n");

		    	for(i=0;i<a;i++){

                printf("\n Produto %d\n\n", i+1);
                printf("\n TIPO - %s \n", Dados_Roupa[i].Tipo);
                printf("\n G�NERO - %s \n", Dados_Roupa[i].Genero);
                printf("\n QUANTIDADE - %d \n", Dados_Roupa[i].Quantidade);
                printf("\n TAMANHO - %c \n", Dados_Roupa[i].Tamanho);
                printf("\n PRE�O - R$%.2f \n", Dados_Roupa[i].Preco);
                printf("\n C�DIGO - %.2d \n", Dados_Roupa[i].CodigoPeca);
                printf("\n PRE�O DE FABRICA��O - R$%.2f \n", Dados_Roupa[i].PrecoFabricacao);
                printf("\n TECIDO - %s \n", Dados_Roupa[i].Tecido);
                printf("\n COR - %s \n", Dados_Roupa[i].Cor);
                printf("\n MARCA - %s \n\n", Dados_Roupa[i].Marca);
                printf("\n");
                }

				printf("\n\n Qual produto voc� gostaria de fazer altera��o? \n ");
				printf("\n OBSERVA��O : Para acessar ao 1� produto digite 0 e assim por diante \n\n");
				scanf("%d", &Produto);

				printf("\n Qual dado do produto voc� quer alterar?\n");
				printf("\n Op��es: 1-TIPO   2-G�NERO   3-QUANTIDADE   4-TAMANHO   5-PRE�O   6-C�DIGO   7-PRE�O DE FABRICA��O   8-TECIDO   9-COR   10-MARCA\n");
				scanf("%d", &Opcao);

				switch(Opcao){
					case 1:{
						printf("\n Alterando Tipo:\n");
						scanf("%s", &Dados_Roupa[Produto].Tipo);
						break;
					}
					case 2:{
                        fflush(stdin);
						printf("\n Alterando G�nero:\n");
						scanf("%c", &Dados_Roupa[Produto].Genero);
						break;
					}
					case 3:{
						printf("\n Alterando Quantidade:\n");
						scanf("%d", &Dados_Roupa[Produto].Quantidade);
						break;
					}
					case 4:{
                        fflush(stdin);
						printf("\n Alterando Tamanho:\n");
						scanf("%c", &Dados_Roupa[Produto].Tamanho);
						break;
					}
					case 5:{
						printf("\n Alterando Pre�o:\n");
						scanf("%f", &Dados_Roupa[Produto].Preco);
						break;
					}
					case 6:{
						printf("\n Alterando C�digo da Pe�a:\n");
						scanf("%d", &Dados_Roupa[Produto].CodigoPeca);
						break;
					}
					case 7:{
						printf("\n Alterando Pre�o de Fabrica��o:\n");
						scanf("%f", &Dados_Roupa[Produto].PrecoFabricacao);
						break;
					}
					case 8:{
						printf("\n Alterando Tecido:\n");
						scanf("%s", Dados_Roupa[Produto].Tecido);
						break;
					}
					case 9:{
						printf("\n Alterando Cor:\n");
						scanf("%s", &Dados_Roupa[Produto].Cor);
						break;
					}
					case 10:{
						printf("\n Alterando Marca:\n");
						scanf("%s", &Dados_Roupa[Produto].Marca);
						break;
					}
				}
				break;
			}
        }
	}
	printf("\n\n >>>>>>>>>>>> CADASTRO E ALTERA��ES ENCERRADOS <<<<<<<<<<<<<\n\n");
    return 0;
}
