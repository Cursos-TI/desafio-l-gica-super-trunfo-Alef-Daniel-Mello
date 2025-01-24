#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int PrimeiraCidade_Codigo;
    char PrimeiraCidade_Nome[50];
    int PrimeiraCidade_Populacao;
    float PrimeiraCidade_AreaKM;
    float PrimeiraCidade_PIB;
    int PrimeiraCidade_PontosTuristicos;
    float PrimeiraCidade_Densidade;
    float PrimeiraCidade_PIBperCapta;

     int SegundaCidade_Codigo;
    char SegundaCidade_Nome[50];
    int SegundaCidade_Populacao;
    float SegundaCidade_AreaKM;
    float SegundaCidade_PIB;
    int SegundaCidade_PontosTuristicos;
    float SegundaCidade_Densidade;
    float SegundaCidade_PIBperCapta;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

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
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    //---------- Lógica de comparação ------------
    printf(" \n");
    printf("Iniciando comparações!\n");
    printf(" \n");
    printf("Primeira comparação : População!\n");

    if(PrimeiraCidade_Populacao > SegundaCidade_Populacao){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(SegundaCidade_Populacao > PrimeiraCidade_Populacao){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);

    } else{
              printf("Foi um empate!\n");
    }

     printf(" \n");
    printf("Segunda comparação : Área em Km!\n");

    if(PrimeiraCidade_AreaKM > SegundaCidade_AreaKM){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(SegundaCidade_AreaKM > PrimeiraCidade_AreaKM){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      
    } else{
              printf("Foi um empate!\n");
    }

 printf(" \n");
    printf("Terceira comparação : PIB!\n");

    if(PrimeiraCidade_PIB > SegundaCidade_PIB){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(SegundaCidade_PIB > PrimeiraCidade_PIB){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      
    } else{
              printf("Foi um empate!\n");
    }

     printf(" \n");
    printf("Quarta comparação : Pontos turísticos!\n");

    if(PrimeiraCidade_PontosTuristicos > SegundaCidade_PontosTuristicos){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(SegundaCidade_PontosTuristicos > PrimeiraCidade_PontosTuristicos){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      
    } else{
              printf("Foi um empate!\n");
    }

     printf(" \n");
    printf("Quinta comparação : PIB per Capta!\n");

    if(PrimeiraCidade_PIBperCapta > SegundaCidade_PIBperCapta){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(SegundaCidade_PIBperCapta > PrimeiraCidade_PIBperCapta){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      
    } else{
              printf("Foi um empate!\n");
    }

     printf(" \n");
    printf("Sexta e Última comparação : Densidade!\n");

    if(SegundaCidade_Densidade > PrimeiraCidade_Densidade){
      printf("O vencedor é a Primeira cidade : %s!\n",PrimeiraCidade_Nome);

    } else if(PrimeiraCidade_Densidade > SegundaCidade_Densidade){
      printf("O vencedor é a Segunda cidade : %s!\n",SegundaCidade_Nome);
      
    } else{
              printf("Foi um empate!\n");
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
