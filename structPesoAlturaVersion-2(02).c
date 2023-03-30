#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct {
  int peso;
  int altura
} pesoAltura;



int main() {
  pesoAltura* pessoa1 = (pesoAltura*) malloc(sizeof(pesoAltura));
  pessoa1->peso = 80;
  pessoa1->altura = 180;
  printf("altura: %.1i\n", pessoa1->altura);
  printf("peso: %.1i\n", pessoa1->peso);
  if (pessoa1->altura > 225) printf("foi introduzido na variavel da memória\n valor de altura maior que o permitido (%.1i)", alturaMaxima);
  else printf("altura em conformidade com o maior valor estipulado\n no endereço de memória %p", &pessoa1->altura);  
  return 0;
}

