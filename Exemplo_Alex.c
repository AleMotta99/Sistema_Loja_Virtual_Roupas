#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define a 1

int main()
{
    setlocale(LC_ALL,"");
    system("color 03");

    char Tipo[a][10], Genero[a][5], Tecido[a][10], Cor[a][10], Marca[a][10],Tamanho[a][3];
    int  Quantidade[a], CodigoPeca[a];
    int i, Total_Produtos = 0;

    float Preco[a], PrecoFabricacao[a];
    int verifica = 0; // variavel para verificar o que o usuario deseja fazer

    while(verifica != 4){

        system("cls");
        printf("\n\n ***************** BEM VINDO A GESTÃO DA LOJA *****************\n\n");
        printf("\n O que deseja fazer ?\n");
        printf("\n 1 - Cadastrar um produto\n");
        printf("\n 2 - Consultar produtos cadastrados\n");
        printf("\n 3 - Alterar um produto\n ");
        printf("\n 4 - Sair \n\n");
        scanf("%d",&verifica);

        fflush(stdin);

		switch(verifica){

			case 1:{
				for(i=0;Total_Produtos < a;i++){

		            printf("\n\n Digite o tipo do produto: \n");
		            printf("\n Opções : Blusa    Calça    Bermuda   Short    Vestido \n\n");
		            gets(Tipo[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o gênero ao qual o produto se destina: \n");
		            printf("\n M - Masculino  F - Feminino\n\n");
		            gets(Genero[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a quantidade de produtos disponíveis: \n\n");
		            scanf("%d",&Quantidade[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o tamanho do produto: \n");
		            printf("\n Opções : G - Grande  M - Médio  P - Pequeno \n\n");
		            gets(Tamanho[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o preço de venda do produto: \n\n");
		            scanf("%f",&Preco[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o código do produto: \n\n");
		            scanf("%d",&CodigoPeca[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o custo de fabricação do produto: \n\n");
		            scanf("%f",&PrecoFabricacao[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite o tipo de tecido do produto: \n");
		            printf("\n  Opções :  Algodão ou  Poliéster  \n\n");
		            gets(Tecido[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a cor do produto: \n");
		            printf("\n Opções : Amarelo   Vermelho   Rosa   Preto   Branco\n\n");
		            gets(Cor[Total_Produtos]);

		            fflush(stdin);
		            printf("\n Digite a marca do produto: \n");
		            printf("\n Opções : Gucci   Adidas   Nike \n\n");
		            gets(Marca[Total_Produtos]);

		            Total_Produtos++;
	            }
				break;
			}
			case 2:{
				printf("\n\n>>>>>>>>>> TABELA DE INFROMAÇÕES DAS ROUPAS CADASTRADAS <<<<<<<<<<<<<< \n\n");

		    	for(i=0;i<a;i++){

					printf("\n TIPO - %s \n", Tipo[i]);
					printf("\n GÊNERO - %s \n", Genero[i]);
					printf("\n QUANTIDADE - %d \n", Quantidade[i]);
					printf("\n TAMANHO - %s \n", Tamanho[i]);
					printf("\n PREÇO - R$%.2f \n", Preco[i]);
					printf("\n CÓDIGO - %.2d \n", CodigoPeca[i]);
					printf("\n PREÇO DE FABRICAÇÃO - R$%.2f \n", PrecoFabricacao[i]);
					printf("\n TECIDO - %s \n", Tecido[i]);
					printf("\n COR - %s \n", Cor[i]);
					printf("\n MARCA - %s \n\n", Marca[i]);
					printf("\n");
				}
				system("pause");
				break;
			}
			case 3:{

				printf("\n\n>>>>>>>>>> TABELA DE INFROMAÇÕES DAS ROUPAS CADASTRDAS <<<<<<<<<<<<<< \n\n");

		    	for(i=0;i<a;i++){

					printf("\n TIPO - %s \n", Tipo[i]);
					printf("\n GÊNERO - %s \n", Genero[i]);
					printf("\n QUANTIDADE - %d \n", Quantidade[i]);
					printf("\n TAMANHO - %s \n", Tamanho[i]);
					printf("\n PREÇO - R$%.2f \n", Preco[i]);
					printf("\n CÓDIGO - %.2d \n", CodigoPeca[i]);
					printf("\n PREÇO DE FABRICAÇÃO - R$%.2f \n", PrecoFabricacao[i]);
					printf("\n TECIDO - %s \n", Tecido[i]);
					printf("\n COR - %s \n", Cor[i]);
					printf("\n MARCA - %s \n\n", Marca[i]);
					printf("\n");

				int Opcao, Produto;
				printf("\n\n Qual produto você gostaria de fazer alteração? \n ");
				scanf("%d", &Produto);

				printf("\n Qual dado do produto você quer alterar?\n");
				printf("\n Opções: 1-TIPO  2-GÊNERO  3-QUANTIDADE  4-TAMANHO  5-PREÇO  6-CÓDIGO  7-PREÇO DE FABRICAÇÃO  8-TECIDO 9-COR  10-MARCA\n");
				scanf("%d", &Opcao);

				switch(Opcao)
				{
					case 1:{

						for(i = 0; i < 10; i++)
						Tipo[Produto][i] = '\0';

						char Tipo_Novo[10];
						printf("\n Alterando Tipo:\n");
						scanf("%s", &Tipo_Novo);
						for(i = 0; i < 10; i++)
						Tipo[Produto][i] = Tipo_Novo[i];
						break;
					}
					case 2:{

                        fflush(stdin);
						char Genero_Novo;
						printf("\n Alterando Gênero:\n");
						scanf("%c", &Genero_Novo);
						Genero[Produto][5] = Genero_Novo;
						break;
					}
					case 3:{

						int Quantidade_Nova;
						printf("\n Alterando Quantidade:\n");
						scanf("%d", &Quantidade_Nova);
						Quantidade[Produto] = Quantidade_Nova;
						break;
					}
					case 4:{

						char Tamanho_Novo;
						printf("\n Alterando Tamanho:\n");
						scanf("%c", &Tamanho_Novo);
						Tamanho[Produto][3] = Tamanho_Novo;
						break;
					}
					case 5:{

						float Preco_Novo;
						printf("\n Alterando Preço:\n");
						scanf("%f", &Preco_Novo);
						Preco[Produto] = Preco_Novo;
						break;
					}
					case 6:{

						int Codigo_Novo;
						printf("\n Alterando Código da Peça:\n");
						scanf("%d", &Codigo_Novo);
						CodigoPeca[Produto] = Codigo_Novo;
						break;
					}
					case 7:{

						float Preco_Fabricacao_Novo;
						printf("\n Alterando Preço de Fabricação:\n");
						scanf("%f", &Preco_Fabricacao_Novo);
						PrecoFabricacao[Produto] = Preco_Fabricacao_Novo;
						break;
					}
					case 8:{

						for(i = 0; i < 20; i++)
						Tecido[Produto][i] = '\0';

						char Tecido_Novo[10];
						printf("\n Alterando Tecido:\n");
						scanf("%s", Tecido_Novo);
						for(i = 0; i < 10; i++)
						Tecido[Produto][i] = Tecido_Novo[i];
						break;
					}
					case 9:{

						for(i = 0; i < 20; i++)
						Cor[Produto][i] = '\0';

						char Cor_Nova[20];
						printf("\n Alterando Cor:\n");
						scanf("%s", &Cor_Nova);
						for(i = 0; i < 20; i++)
						Cor[Produto][i] = Cor_Nova[i];
						break;
					}
					case 10:{

						for(i = 0; i < 20; i++)
						Marca[Produto][i] = '\0';

						char Marca_Nova[20];
						printf("\n Alterando Marca:\n");
						scanf("%s", &Marca_Nova);
						for(i = 0; i < 20; i++)
						Marca[Produto][i] = Marca_Nova[i];
						break;
					}
				}
				break;
			}
		}
	 }
	}
    return 0;
}
