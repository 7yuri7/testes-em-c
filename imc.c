#include<stdio.h>
int main(){

float peso, altura,imc;
printf("digite seu peso \n");
scanf("%f", &peso);
printf("digite sua altura \n");
scanf("%f", &altura); 

//calculo IMC é peso/(altura x altura).
imc = (altura * altura) / peso;
printf("%f", imc);



}
