#include <stdio.h>
int main(void){
  int number,totalnumber;
  scanf("%d",&number);
  int population[number];
  int i;
  totalnumber = 0.;
  for (i=0;i<number;i++){
    scanf("%d",&population[i]);
    if(population[i]>10000){
      totalnumber += 1;
    }
  }
  printf("%d\n",totalnumber);
  return 0;
}
