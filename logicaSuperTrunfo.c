#include <stdio.h>

int main() {

    int PrimeiraCidade_Codigo;
    char PrimeiraCidade_Nome[50];
    int PrimeiraCidade_Populacao;
    float PrimeiraCidade_AreaKM;
    float PrimeiraCidade_PIB;
    int PrimeiraCidade_PontosTuristicos;
    float PrimeiraCidade_Densidade;
    float PrimeiraCidade_PIBperCapta;
    int PrimeiraCidade_Pontos;

     int SegundaCidade_Codigo;
    char SegundaCidade_Nome[50];
    int SegundaCidade_Populacao;
    float SegundaCidade_AreaKM;
    float SegundaCidade_PIB;
    int SegundaCidade_PontosTuristicos;
    float SegundaCidade_Densidade;
    float SegundaCidade_PIBperCapta;
    int SegundaCidade_Pontos;

    int PrimeiraComparacao;
    int SegundaComparacao;

    printf("Desafio lógica do Super Trunfo!\n");
    printf("Vamos começar cadastrando a primeira cidade!\n");
    printf(" \n");

    printf("Digite o código da primeira cidade :\n");
    scanf("%d",&PrimeiraCidade_Codigo);
    printf("Código da primeira cidade definido como : %d\n", PrimeiraCidade_Codigo);

    printf("Digite o nome da primeira cidade :\n");
    scanf("%s",&PrimeiraCidade_Nome);
    printf("Nome da primeira cidade definido como : %s\n", PrimeiraCidade_Nome);

    printf("Digite a população da primeira cidade :\n");
    scanf("%d",&PrimeiraCidade_Populacao);
    printf("População da primeira cidade definido como : %d\n", PrimeiraCidade_Populacao);

    printf("Digite a área em km da primeira cidade :\n");
    scanf("%f",&PrimeiraCidade_AreaKM);
    printf("Área da primeira cidade definido como : %f\n", PrimeiraCidade_AreaKM);

    printf("Digite o PIB da primeira cidade :\n");
    scanf("%f",&PrimeiraCidade_PIB);
    printf("PIB da primeira cidade definido como : %f\n", PrimeiraCidade_PIB);

    printf("Digite a quantidade de pontos turísticos da primeira cidade :\n");
    scanf("%d",&PrimeiraCidade_PontosTuristicos);
    printf("Quantidade da primeira cidade definido como : %d\n", PrimeiraCidade_PontosTuristicos);

    PrimeiraCidade_Densidade = PrimeiraCidade_Populacao / PrimeiraCidade_AreaKM;
    PrimeiraCidade_PIBperCapta = PrimeiraCidade_PIB / PrimeiraCidade_Populacao;

    printf(" \n");

    // ------- Segunda cidade ---------

    printf("Desafio lógica do Super Trunfo!\n");
    printf("Vamos começar cadastrando a Segunda cidade!\n");

    printf("Digite o código da Segunda cidade :\n");
    scanf("%d",&SegundaCidade_Codigo);
    printf("Código da Segunda cidade definido como : %d\n", SegundaCidade_Codigo);

    printf("Digite o nome da Segunda cidade :\n");
    scanf("%s",&SegundaCidade_Nome);
    printf("Nome da Segunda cidade definido como : %s\n", SegundaCidade_Nome);

    printf("Digite a população da Segunda cidade :\n");
    scanf("%d",&SegundaCidade_Populacao);
    printf("População da Segunda cidade definido como : %d\n", SegundaCidade_Populacao);

    printf("Digite a área em km da Segunda cidade :\n");
    scanf("%f",&SegundaCidade_AreaKM);
    printf("Área da Segunda cidade definido como : %f\n", SegundaCidade_AreaKM);

    printf("Digite o PIB da Segunda cidade :\n");
    scanf("%f",&SegundaCidade_PIB);
    printf("PIB da Segunda cidade definido como : %f\n", SegundaCidade_PIB);

    printf("Digite a quantidade de pontos turísticos da Segunda cidade :\n");
    scanf("%d",&SegundaCidade_PontosTuristicos);
    printf("Quantidade da Segunda cidade definido como : %d\n", SegundaCidade_PontosTuristicos);

    SegundaCidade_Densidade = SegundaCidade_Populacao / SegundaCidade_AreaKM;
    SegundaCidade_PIBperCapta = SegundaCidade_PIB / SegundaCidade_Populacao;
        printf(" \n");

    printf("Todos os valores foram definidos, mostrando resumo das cidades :\n");
    printf(" \n");

    printf("Primeira cidade :\n");
    printf("Nome : %s\n", PrimeiraCidade_Nome);
    printf("Código : %d\n", PrimeiraCidade_Codigo);
    printf("População : %d\n", PrimeiraCidade_Populacao);
    printf("Área em Km : %f\n", PrimeiraCidade_AreaKM);
    printf("PIB : %f\n", PrimeiraCidade_PIB);
    printf("Pontos turísticos : %d\n", PrimeiraCidade_PontosTuristicos);
    printf("PIB per Capta : %f\n", PrimeiraCidade_PIBperCapta);
    printf("Densidade : %f\n", PrimeiraCidade_Densidade);

    printf(" \n");

    printf("Segunda cidade :\n");
    printf("Nome : %s\n", SegundaCidade_Nome);
    printf("Código : %d\n", SegundaCidade_Codigo);
    printf("População : %d\n", SegundaCidade_Populacao);
    printf("Área em Km : %f\n", SegundaCidade_AreaKM);
    printf("PIB : %f\n", SegundaCidade_PIB);
    printf("Pontos turísticos : %d\n", SegundaCidade_PontosTuristicos);
    printf("PIB per Capta : %f\n", SegundaCidade_PIBperCapta);
    printf("Densidade : %f\n", SegundaCidade_Densidade);

    printf(" \n");

    //---------- Lógica de comparação ------------

    printf("*1* Escolha o primeiro atributo a ser comparado! *1*\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - PIB per Capta\n");
        printf("6 - Densidade\n");

        scanf("%d",&PrimeiraComparacao);

      printf("*2* Escolha o segundo atributo a ser comparado! *2*\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - PIB per Capta\n");
        printf("6 - Densidade\n");

        scanf("%d",&SegundaComparacao);


    switch (PrimeiraComparacao)
    {
      // População
    case 1:
    {
    printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : População!\n");

    if(PrimeiraCidade_Populacao > SegundaCidade_Populacao){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
      PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_Populacao > PrimeiraCidade_Populacao){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }} 
      break;
    
    // Area
    case 2:
{
  printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Área em Km!\n");
 if(PrimeiraCidade_AreaKM > SegundaCidade_AreaKM){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_AreaKM > PrimeiraCidade_AreaKM){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
}
    break;

    // PIB
    case 3:

{
  printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : PIB!\n");

    if(PrimeiraCidade_PIB > SegundaCidade_PIB){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PIB > PrimeiraCidade_PIB){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }

}   
    break;

    // Pontos Turísticos
    case 4:
    {
printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Pontos turísticos!\n");
if(PrimeiraCidade_PontosTuristicos > SegundaCidade_PontosTuristicos){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PontosTuristicos > PrimeiraCidade_PontosTuristicos){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

    // PIB per Capta
    case 5:
    {
printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : PIB per Capta!\n");

    if(PrimeiraCidade_PIBperCapta > SegundaCidade_PIBperCapta){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PIBperCapta > PrimeiraCidade_PIBperCapta){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

    // Densidade
    case 6:
    {
      printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Densidade!\n");

 if(SegundaCidade_Densidade > PrimeiraCidade_Densidade){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(PrimeiraCidade_Densidade > SegundaCidade_Densidade){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

default:
      break;
    }

    switch (SegundaComparacao)
    {
      // População
    case 1:
    {
    printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : População!\n");

    if(PrimeiraCidade_Populacao > SegundaCidade_Populacao){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
      PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_Populacao > PrimeiraCidade_Populacao){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }} 
      break;
    
    // Area
    case 2:
{
  printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Área em Km!\n");
 if(PrimeiraCidade_AreaKM > SegundaCidade_AreaKM){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_AreaKM > PrimeiraCidade_AreaKM){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
}
    break;

    // PIB
    case 3:

{
  printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : PIB!\n");

    if(PrimeiraCidade_PIB > SegundaCidade_PIB){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PIB > PrimeiraCidade_PIB){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }

}   
    break;

    // Pontos Turísticos
    case 4:
    {
printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Pontos turísticos!\n");
if(PrimeiraCidade_PontosTuristicos > SegundaCidade_PontosTuristicos){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PontosTuristicos > PrimeiraCidade_PontosTuristicos){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

    // PIB per Capta
    case 5:
    {
printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : PIB per Capta!\n");

    if(PrimeiraCidade_PIBperCapta > SegundaCidade_PIBperCapta){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(SegundaCidade_PIBperCapta > PrimeiraCidade_PIBperCapta){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

    // Densidade
    case 6:
    {
      printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Status comparado : Densidade!\n");

 if(SegundaCidade_Densidade > PrimeiraCidade_Densidade){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);
PrimeiraCidade_Pontos++;
    } else if(PrimeiraCidade_Densidade > SegundaCidade_Densidade){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      SegundaCidade_Pontos++;
    } else{
              printf("Foi um empate!\n");
    }
    }
    break;

default:
      break;
    }
printf(" \n");

printf("Resultado da partida :\n");
PrimeiraCidade_Pontos != SegundaCidade_Pontos ? (PrimeiraCidade_Pontos > SegundaCidade_Pontos ? printf("A primeira cidade venceu!") : printf("A segunda cidade venceu!")):(printf("Vocês empataram!"));
   ;
    return 0;
}
