#include <stdio.h>
int main(void){
  int population;
  int day=1, effected=1, total;
  scanf("%d",&population);
  total = effected;
  while(population>total){
    effected = total*2;
    total = total + effected;
    day++;
  }
  printf("%d\n",day);
  return 0;
}
