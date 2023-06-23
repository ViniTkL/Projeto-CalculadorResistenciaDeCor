#include <stdio.h>
#include <stdlib.h>
/*
==================================================================================

                        Calculador de cores de resistência

==================================================================================
Empresa: Guizinho's Ltda.
Equipe de Programadores:
               Gabriel Barbosa de arruda
               Vinícius Santana Azambuja
               -------------------------
               -------------------------
Curso: Tecnologia de analise e desenvolvimento de sistemas
Data de início do projeto: 19/09/2022
----------------------------------------------------------------------------------
Descrição do Programa:
		Programa feito com o intruito de ajudar pessoas a calcular o valor
		de resistências paralelas de 4 cores. Dessa forma, para o correto
		funcionamento do programa deve-se saber antecipadamente as cores
		e as posições das resistências a quais vão ser calculadas.
Versão do programa: 1.0
Melhorias da versão: Primeira versão.
Data de lançamento da versão: dd/mm/aa
==================================================================================
*/
int main(void)
{
    //declarando variaveis
    int R1,R2, qntd;
    float Rmin,Rmax,R3,R4,Rtot;
    //fazendo interface do programa
    printf("============================================================\n--------------------Calculadora de resistencia---------------\n----------------------De 4 faixas de cor--------------------\n============================================================");
    //perguntar quantas vezes se deseja executar o aplicativo
    printf("\nQuantas vezes deseja fazer o calculo?: ");
    scanf("%d",&qntd);
    //mostrando a tabela
    printf("\nTabela de cores dos resistores: \n\t\n\t|Cor    |1-faixa|2-faixa|multiplicador|Tolerancia|\n\tpreto:    0         0       1            +-20%\n\tmarrom:   1         1       10           +-1%\n\tvermelho: 2         2       10^2         +-2%\n\tlaranja:  3         3       10^3         +-3%\n\tamarelo:  4         4       10^4         +-4%\n\tverde:    5         5       10^5          -\n\tazul:     6         6       10^6          -\n\tvioleta:  7         7       10^7          -\n\tcinza:    8         8       10^8          -\n\tbranco:   9         9       10^9          -\n\tdourado:  -         -       0.1          +-5%\n\tprateado: -         -       0.01         +-10%\n============================================================");
    //estrutura de repetição para o programa inteiro
    for(int i=0;i<qntd;i++){
    //primeira estrutra de escolha
    printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa 1:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
    scanf("%d",&R1);
    //estrutura para selecionar novamente as opções caso digite errado
    if(R1<0 || R1>11){
        while(R1<0 || R1>11){
            printf("\n============================================================\nValor Invalido\nPorfavor tente novamente: ");
            printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa 1:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
            scanf("%d",&R1);
        }
    }
    //estrutura if n°1  para associação de valores da primeira faixa
    if(R1<1){
        R1=0;
    }
    else{
            if(R1>0 && R1<2){
                R1=10;}
                else{
                    if(R1>1 && R1<3){
                      R1=20;}
                      else{
                          if(R1>2 && R1<4){
                              R3=30;}
                              else{
                                  if(R1>3 && R1<5){
                                      R1=40;}
                                      else{
                                          if(R1>4 && R1<6){
                                              R1=50;}
                                              else{
                                                  if(R1>5 && R1<7){
                                                      R1=60;}
                                                      else{
                                                          if(R1>6 && R1<8){
                                                              R1=70;}
                                                              else{
                                                                  if(R1>7 && R1<9){
                                                                      R1=80;}
                                                                      else{
                                                                          if(R1>8 && R1<10){
                                                                              R1=90;}
                                                                            else{
                                                                                if(R1>9 && R1<11){
                                                                                R1=0;}
                                                                                else{
                                                                                    if(R1>10 && R1<12){
                                                                                        R1=0;}
                                                                                }
                                                                            }
                                                                      }
                                                              }
                                                      }
                                              }
                                          }
                                      }
                                  }
                              }
                          }






    //segunda estrutra de escolha
    printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa 2:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
    scanf("%d",&R2);
    //estrutura para selecionar novamente as opções caso digite errado
    if(R2<0 || R2>11){
        while(R2<0 || R2>11){
            printf("\n============================================================\nValor Invalido\nPorfavor tente novamente: ");
            printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa 2:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
            scanf("%d",&R2);
        }
    }
    //estrutura if n°2  para associação de valores da segunda faixa
    if(R2<1){
        R2=0;
    }
    else{
            if(R2>0 && R2<2){
                R2=1;}
                else{
                    if(R2>1 && R2<3){
                      R2=2 ; }
                      else{
                          if(R2>2 && R2<4){
                              R2=3;}
                              else{
                                  if(R2>3 && R2<5){
                                      R2=4;}
                                      else{
                                          if(R2>4 && R2<6){
                                              R2=5;}
                                              else{
                                                  if(R2>5 && R2<7){
                                                      R2=6;}
                                                      else{
                                                          if(R2>6 && R2<8){
                                                              R2=7;}
                                                              else{
                                                                  if(R2>7 && R2<9){
                                                                      R2=8;}
                                                                      else{
                                                                          if(R2>8 && R2<10){
                                                                              R2=9;}
                                                                            else{
                                                                                if(R2>9 && R2<11){
                                                                                R2=0;}
                                                                                else{
                                                                                    if(R2>10 && R2<12){
                                                                                        R2=0;}
                                                                                }
                                                                            }
                                                                      }
                                                              }
                                                      }
                                              }
                                          }
                                      }
                                  }
                              }
                        }


    //terceira estrutura de escolha
    printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa do multiplicador:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
    scanf("%f",&R3);
    //estrutura para selecionar novamente as opções caso digite errado
    if(R3<0 || R3>11){
        while(R3<0 || R3>11){
            printf("\n============================================================\nValor Invalido\nPorfavor tente novamente: ");
            printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa do multiplicador:\n============================================================\n\t0-preto\t    4-amarelo    8-cinza\n\t1-marrom    5-verde      9-branco\n\t2-vermleho  6-azul       10-dourado\n\t3-laranja   7-violeta    11-prateado\n============================================================\nSelecionar: ");
            scanf("%f",&R3);
        }
    }
    //estrutura if n°3  para associação de valores da terceira faixa
    if(R3<1){
        R3=1;
    }
    else{
            if(R3>0 && R3<2){
                R3=10;}
                else{
                    if(R3>1 && R3<3){
                      R3=100 ; }
                      else{
                          if(R3>2 && R3<4){
                              R3=1000;}
                              else{
                                  if(R3>3 && R3<5){
                                      R3=10000;}
                                      else{
                                          if(R3>4 && R3<6){
                                              R3=100000;}
                                              else{
                                                  if(R3>5 && R3<7){
                                                      R3=1000000;}
                                                      else{
                                                          if(R3>6 && R3<8){
                                                              R3=10000000;}
                                                              else{
                                                                  if(R3>7 && R3<9){
                                                                      R3=100000000;}
                                                                      else{
                                                                          if(R3>8 && R3<10){
                                                                              R3=1000000000;}
                                                                            else{
                                                                                if(R3>9 && R3<11){
                                                                                R3=0.1;}
                                                                                else{
                                                                                    if(R3>10 && R3<12){
                                                                                        R3=0.01;}
                                                                                }
                                                                            }
                                                                      }
                                                              }
                                                      }
                                              }
                                          }
                                      }
                                  }
                              }
                          }


    //quarta estrutura de escolha
    printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa de tolerancia:\n============================================================\n\t0-preto\t    4-amarelo    \n\t1-marrom    5-dourado      \n\t2-vermleho  6-prateado       \n\t3-laranja   \n============================================================\nSelecionar: ");
    scanf("%f",&R4);
    //estrutura para selecionar novamente as opções caso digite errado
    if(R4<0 || R4>6){
        while(R4<0 || R4>6){
            printf("\n============================================================\nValor Invalido\nPorfavor tente novamente: ");
            printf("\nDe acordo com a tabela digite o numero correspondente a cor do resistor da faixa de tolerancia:\n============================================================\n\t0-preto\t    4-amarelo    \n\t1-marrom    5-dourado      \n\t2-vermleho  6-prateado       \n\t3-laranja   \n============================================================\nSelecionar: ");
            scanf("%f",&R4);
        }
    }
    //estrutura if n°4 para associação de valores da quarta faixa
    if(R4<1){
        R4=0.2;
    }
    else{
            if(R4>0 && R4<2){
                R4=0.01;}
                else{
                    if(R4>1 && R4<3){
                      R4=0.02 ; }
                      else{
                          if(R4>2 && R4<4){
                              R4=0.03;}
                              else{
                                  if(R4>3 && R4<5){
                                      R4=0.04;}
                                      else{
                                          if(R4>4 && R4<6){
                                              R4=0.01;}
                                              else{
                                                  if(R4>5&&R4<7)
                                                    R4=0.1;

                                              }


                                          }
                                      }
                                  }
                              }
                          }




    //Rtot declarando
    Rtot=(R1+R2)*R3;
    //fazendo a tolerenacia mínima
    Rmin=Rtot-(Rtot*R4);
    //fazendo a tolerenacia máxima
    Rmax=Rtot+(Rtot*R4);
    //mostrando Resultados
    printf("============================================================\n\tA resistencia deu um valor igual a: %.2f Ohms\n\n\tResistencia minima tolerada: %.2f Ohms\n\n\tResistencia maxima tolerada: %.2f Ohms\n============================================================", Rtot,Rmin,Rmax);
    }
    return 0;

}
