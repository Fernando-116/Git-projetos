
#include <iostream>


int main(){
  //calculadora
  //variaveis
  int opcao,continuar,num_v;
  float num1,num2, result;
 
  num1=0;
  num2=0;
  result=0;
  opcao=0;
  num_v=0;
  continuar=0;
 
  //entrada
  printf("bem-vindo a calculadora v.02\nselecione a operacao desejada (por favor digirte o numero que acompanha a operacao\n1-adicao 2-subtracao 3-multiplicacao 4-divisao\n");
  scanf("%d",&opcao);
  printf("digite o numero e veses que deseja ultilizar esta funcao:");
  scanf("%d", &num_v);
  while(num_v>continuar){
  printf("\n digite os numeros da operacao: \n");
  scanf("%f",&num1);
  scanf("%f",&num2);
  //processo
 
  switch(opcao){
      case 1:
      result=num1+num2;
      printf("o resultado da operacao e : %.2f", result);
      continuar++;
      break;
     
      case 2:
      result= num1 - num2;
      printf("o resultado da operacao e : %.2f", result);
      continuar++;
      break;
     
      case 3:
      result= num1 * num2;
      printf("o resultado da operacao e : %.2f", result);
      continuar++;
      break;
     
      case 4:
      result= num1 / num2;
      printf("o resultado da operacao e : %.2f", result);
      continuar++;
      break;
     
      default:
      printf("*******ERRO-ESTA OPCAO NAO EXISTE OU ESTA INDISPONIVEL*******");
     
     
    }
 
  //saida
        }
    return 0;
   
}
