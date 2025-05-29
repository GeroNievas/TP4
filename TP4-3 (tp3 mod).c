#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Ingrese el peso en kg: ");//peso
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");//altura
    scanf("%f", &altura);
    imc = peso / (altura * altura);//calculo de IMC
    printf("\nSu índice de masa corporal es: %.2f\n\n", imc);//Resultado:
    printf("Índice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5| Bajo peso\n");
    printf("18.5 a 24.9| Normal\n");
    printf("25.0 a 29.9| Sobrepeso\n");
    printf(">=30| Obesidad\n\n");
    printf("Su condición es: ");
    if (imc < 18.5) {
     printf("Bajo peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.9) {
     printf("Normal\n");
    }
    else if (imc >= 25.0 && imc <= 29.9) {
     printf("Sobrepeso\n");
    }
    else {
     printf("Obesidad\n");
    }
   return 0;
}