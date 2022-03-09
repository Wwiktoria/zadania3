#include <stdio.h>
int main(void){
int a;
printf("Wprowadź liczbę:");
scanf("%d",&a);
  if(a%2==0){
    printf("Wprowadzona liczba jest parzysta.\n");
  }
  else
  {
    printf("Wprowadzona liczba jest nieparzysta.\n");
  }
  return 0;
  }