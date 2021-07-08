#include <stdio.h>
#include <stdlib.h>
int main(){
  int i1 = 0;
  int i2 = 0;
  
  printf("Rolling the dice...\n");
  i1 = rand()%6 + 1;
  printf("Die 1 : %d\n",i1);
  i2 = rand()%6 + 1;
  printf("Die 2 : %d\n",i2);
  printf("Total value: %d\n",i1+i2);
  if(i1+i2 >= 7)printf("You won!",lan);
  else printf("You lost!\n",lan);
 
  return 0;
}
