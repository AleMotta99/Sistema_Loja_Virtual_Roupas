#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define a 3

int main()
{
    setlocale(LC_ALL,"");
    system("color 03");

    char Tipo[a][10], Genero[a][3], Tecido[a][10], Cor[a][20], Marca[a][10],Tamanho[a][3];
    char Tipo_Novo[10],Genero_Novo[3], Tamanho_Novo[3], Tecido_Novo[10], Cor_Nova[20], Marca_Nova[10];
    int  Quantidade[a], CodigoPeca[a], Quantidade_Nova, Codigo_Novo;
    int i, Total_Produtos = 0, Opcao, Produto;
    int verifica = 0;
    float Preco[a], PrecoFabricacao[a], Preco_Novo, Preco_Fabricacao_Novo;


    while(verifica != 4)
    {
        system("cls");
        printf("\n\n ***************** BEM VINDO A GEST�O DA LOJA *****************\n\n");
        printf("\n O que deseja fazer ?\n");
        printf("\n 1 - Cadastrar um produto\n");
        printf("\n 2 - Consultar produtos cadastrados\n");
        printf("\n 3 - Alterar um produto\n ");
        printf("\n 4 - Sair \n\n");
        scanf("%d",&verifica);

        fflush(stdin);

       switch(verifica)
       {
			case 1:{
				for(i=0;Total_Produtos < a;i++){

                    system("cls");
		            printf("\n\n Digite o tipo do produto: \n");
		            printf("\n Op��es : Blusa    Cal�a    Bermuda   Short    Vestido   Saia\n\n");
		            gets(Tipo[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o g�nero ao qual o produto se destina: \n");
		            printf("\n M - Masculino  F - Feminino\n\n");
		            gets(Genero[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a quantidade de produtos dispon�veis: \n\n");
		            scanf("%d",&Quantidade[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o tamanho do produto: \n");
		            printf("\n Op��es : G - Grande  M - M�dio  P - Pequeno \n\n");
		            gets(Tamanho[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o pre�o de venda do produto: \n\n");
		            scanf("%f",&Preco[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o c�digo do produto: \n\n");
		            scanf("%d",&CodigoPeca[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o custo de fabrica��o do produto: \n\n");
		            scanf("%f",&PrecoFabricacao[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o tipo de tecido do produto: \n");
		            printf("\n  Op��es :  Algod�o ou  Poli�ster  \n\n");
		            gets(Tecido[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a cor do produto: \n");
		            printf("\n Op��es : Amarelo   Vermelho   Rosa   Preto   Branco   Azul \n\n");
		            gets(Cor[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a marca do produto: \n");
		            printf("\n Op��es : Gucci   Adidas   Nike   Zara \n\n");
		            gets(Marca[Total_Produtos]);

		            Total_Produtos++;
	            }
				break;
			}
			case 2:{
				printf("\n\n>>>>>>>>>> TABELA DE INFROMA��ES DAS ROUPAS CADASTRADAS <<<<<<<<<<<<<< \n\n");

		    	for(i=0;i<a;i++){

                    printf("%\n Produto %d\n\n", i);
					printf("\n TIPO - %s \n", Tipo[i]);
					printf("\n G�NERO - %s \n", Genero[i]);
					printf("\n QUANTIDADE - %d \n", Quantidade[i]);
					printf("\n TAMANHO - %s \n", Tamanho[i]);
					printf("\n PRE�O - R$%.2f \n", Preco[i]);
					printf("\n C�DIGO - %.2d \n", CodigoPeca[i]);
					printf("\n PRE�O DE FABRICA��O - R$%.2f \n", PrecoFabricacao[i]);
					printf("\n TECIDO - %s \n", Tecido[i]);
					printf("\n COR - %s \n", Cor[i]);
					printf("\n MARCA - %s \n\n", Marca[i]);
					printf("\n");
				}
				system("pause");
				break;
			}

            case 3:
            {
				printf("\n\n>>>>>>>>>> TABELA DE INFROMA��ES DAS ROUPAS CADASTRDAS <<<<<<<<<<<<<< \n\n");

		    	for(i=0;i<a;i++){

                    printf("%\n Produto %d\n\n", i);
					printf("\n TIPO - %s \n", Tipo[i]);
					printf("\n G�NERO - %s \n", Genero[i]);
					printf("\n QUANTIDADE - %d \n", Quantidade[i]);
					printf("\n TAMANHO - %s \n", Tamanho[i]);
					printf("\n PRE�O - R$%.2f \n", Preco[i]);
					printf("\n C�DIGO - %.2d \n", CodigoPeca[i]);
					printf("\n PRE�O DE FABRICA��O - R$%.2f \n", PrecoFabricacao[i]);
					printf("\n TECIDO - %s \n", Tecido[i]);
					printf("\n COR - %s \n", Cor[i]);
					printf("\n MARCA - %s \n\n", Marca[i]);
					printf("\n");


				printf("\n\n Qual produto voc� gostaria de fazer altera��o? \n ");
				printf("\n OBSERVA��O : Para acessar ao 1� produto digite 0 e assim por diante \n\n");
				scanf("%d", &Produto);

				printf("\n Qual dado do produto voc� quer alterar?\n");
				printf("\n Op��es: 1-TIPO   2-G�NERO   3-QUANTIDADE   4-TAMANHO   5-PRE�O   6-C�DIGO   7-PRE�O DE FABRICA��O   8-TECIDO   9-COR   10-MARCA\n");
				scanf("%d", &Opcao);

				switch(Opcao)
				{
					case 1:{

						for(i = 0; i < 10; i++)
						Tipo[Produto][i] = '\0';

						printf("\n Alterando Tipo:\n");
						scanf("%s", &Tipo_Novo);
						for(i = 0; i < 10; i++)
						Tipo[Produto][i] = Tipo_Novo[i];
						break;
					}
					case 2:{

                        fflush(stdin);
						printf("\n Alterando G�nero:\n");
						scanf("%c", &Genero_Novo);
						for(i = 0; i < 3; i++)
						Genero[Produto][i] = Genero_Novo[i];
						break;
					}
					case 3:{

						printf("\n Alterando Quantidade:\n");
						scanf("%d", &Quantidade_Nova);
						Quantidade[Produto] = Quantidade_Nova;
						break;
					}
					case 4:{

                        fflush(stdin);
						printf("\n Alterando Tamanho:\n");
						scanf("%c", &Tamanho_Novo);
						for(i = 0; i < 3; i++)
						Tamanho[Produto][i] = Tamanho_Novo[i];
						break;
					}
					case 5:{

						printf("\n Alterando Pre�o:\n");
						scanf("%f", &Preco_Novo);
						Preco[Produto] = Preco_Novo;
						break;
					}
					case 6:{

						printf("\n Alterando C�digo da Pe�a:\n");
						scanf("%d", &Codigo_Novo);
						CodigoPeca[Produto] = Codigo_Novo;
						break;
					}
					case 7:{

						printf("\n Alterando Pre�o de Fabrica��o:\n");
						scanf("%f", &Preco_Fabricacao_Novo);
						PrecoFabricacao[Produto] = Preco_Fabricacao_Novo;
						break;
					}
					case 8:{

						for(i = 0; i < 20; i++)
						Tecido[Produto][i] = '\0';

						printf("\n Alterando Tecido:\n");
						scanf("%s", Tecido_Novo);
						for(i = 0; i < 10; i++)
						Tecido[Produto][i] = Tecido_Novo[i];
						break;
					}
					case 9:{


						printf("\n Alterando Cor:\n");
						scanf("%s", &Cor_Nova);
						for(i = 0; i < 20; i++)
						Cor[Produto][i] = Cor_Nova[i];
						break;
					}
					case 10:{

						for(i = 0; i < 10; i++)
						Marca[Produto][i] = '\0';

						printf("\n Alterando Marca:\n");
						scanf("%s", &Marca_Nova);
						for(i = 0; i < 10; i++)
						Marca[Produto][i] = Marca_Nova[i];
						break;
					}
				}
				break;
			}
          }
	  }
	}

	printf("\n\n >>>>>>>>>>>> CADASTRO E ALTERA��ES ENCERRADOS <<<<<<<<<<<<<\n\n");

    return 0;
}
