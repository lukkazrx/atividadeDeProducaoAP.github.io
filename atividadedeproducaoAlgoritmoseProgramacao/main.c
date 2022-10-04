#include <math.h>
#include <stdio.h>
#include <string.h>
/* 
  - perfil no GitHub: https://github.com/lukkazrx
  - link do repositório no GitHub: https://github.com/lukkazrx/atividadeDeProducaoAP.github.io
  - link do repositório no replit : https://replit.com/@LUCASRIBEIRO82/atividadeDeProducaoV2#main.c
  - O código tem como objetivo ser legível e
    realizar calculo com valores inseridos pelo usuário.
  - o código contém: estruturas seleção (if e switch case) e estruturas de repetição (do while).
  - conteúdo utilizado para pesquisar a sintaxe da linguagem:
    1) https://devdocs.io/c/
    2) e-book da disciplina
*/

int main(void) {
    //Exibindo mensagem ao usuário
  printf("DADOS DO AUTOR:\n");
  printf("Nome: Lucas Ribeiro Nunes\n");
  printf("Curso: Análise e Desenvolvimento de Sistemas\n");
  printf("Universidade: Universidade La Salle.\n");
  printf("Número de matrícula: 202220849\n\n");

    //declaração de variáveis:
  double number1, number2, squareRoot1, squareRoot2, addUp, subtraction, multiply, div, toThePower;
  int operation;

    //Escolha da operação que o usuário deseja
  do {
    printf("-------------------------------------------------------");
    printf("\nQual operação deseja realizar?\n");
    printf("Digite [1] para realizar raiz quadrada dos números.\n\n");
    printf("Digite [2] para realizar uma soma, uma subtração, uma multiplicação, uma divisão e uma potenciação entre os números.\n");
    printf("-------------------------------------------------------\n");
    scanf("%d", &operation);
    printf("\n [%d] é o número da operação desejada.\n", operation);

    //verificador de opção válida
    if (operation <1 || operation > 2) {
      printf("\nA opção desejada é inválida. Selecione a opção [1] ou [2].\n");
    }
   } while (operation < 1 || operation > 2);

  printf("\nInsira dois números que deseja calcular.\n");

    //Verificador de números menores que 1
  do  {
    printf("\nDigite o primeiro número: ");
    scanf("%lf", &number1);
    printf("Digite o segundo número: ");
    scanf("%lf", &number2);

    //mensagem caso o número seja menor que 1
      if (number1 < 1 || number2 < 1) {
        printf("\nOs números menores que [1] são inválidos. Digite números válidos.");
    }
   } while (number1 <= 1 || number2 <= 1);

    //calculadora que realiza a operação desejada
    switch (operation){
    case 1:
        squareRoot1 = sqrt(number1); //operação de raiz quadrada 1
        squareRoot2 = sqrt(number2); //operação de raiz quadrada 2
        printf("\nA raiz quadrada dos números inseridos é: %.2lf e %.2lf.", squareRoot1, squareRoot2);
        printf("\nObrigado por utilizar o programa.");
        break;

    case 2:
        addUp = number1 + number2; //operação de soma
        printf("\nA Soma entre os números inseridos é: %.2lf.", addUp);
        subtraction = number1 - number2; //operação de subtração
        printf("\nA subtração dos números inseridos é: %.2lf.", subtraction);
        multiply = number1 * number2; //operação de multiplicação
        printf("\nA multiplicação entre os números é: %.2lf.", multiply);
        div = number1 / number2; //operação de divisão
        printf("\nA divisão entre os números é: %.2lf.", div);
        toThePower = pow(number1, number2); //operação de potencia
        printf("\nA potência dos números é: %.2lf.", toThePower);
        printf("\nObrigado por utilizar o programa.");
        break;

    default:
           printf("\nA opção desejada é inválida. Por Favor digite uma opção válida.\n");
        break;
      }
    return 0;
}