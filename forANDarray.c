#include <stdio.h>

int main() {
  int myNumbers[50];
  int i = 0;
  printf("[");
  for(; i<50; i++){
  if(i == 50){
  break;
  }
  myNumbers[i] = i;
  printf("%d\, ", myNumbers[i]);
  }
  printf("50]");
 
  return 0;
}