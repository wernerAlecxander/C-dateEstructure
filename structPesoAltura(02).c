#include <stdio.h>
#define alturaMaxima 225

typedef struct {
  int peso;
  int altura
} pesoAltura;



int main() {
  pesoAltura pessoa1;
  pessoa1.peso = 80;
  pessoa1.altura = 180;
  printf("altura: %.1i\n", pessoa1.altura);
  printf("peso: %.1i\n", pessoa1.peso);
  if (pessoa1.altura > 225) printf("foi introduzido na variavel da memória\n valor de altura maior que o permitido (%.1i)", alturaMaxima);
  else printf("altura em conformidade\n com o maior valor estipulado na memória\n");
  int x = 25;
  int* y = &x;
  *y = 30;
  printf("o valor atual de x é: %.1i\n", x);
  return 0;
}