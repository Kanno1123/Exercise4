#include <stdio.h>
#include <stdlib.h>
int main(){
  int i1 = 0;
  int i2 = 0;
  int i3 = 0;
  char lan[10];

  printf("What is your name?\n");
  scanf("%s",lan);
  printf("Hello, %s\n",lan);
  printf("Rolling the dice...\n");
  i1 = rand()%6 + 1;
  printf("Die 1 : %d\n",i1);
  i2 = rand()%6 + 1;
  printf("Die 2 : %d\n",i2);
  printf("Total value: %d\n",i1+i2);
 
  return 0;
}
