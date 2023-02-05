#include <stdio.h>
int main(void){
  int number;
  scanf("%d",&number);
  double price[number],weight[number];
  int i;
  double sum;
  sum = 0.;
  for(i=0;i<number;i++){
    scanf("%lf",&price[i]);
  }
  for(i=0;i<number;i++){
    scanf("%lf",&weight[i]);
  }
  for(i=0;i<number;i++){
    sum = sum + weight[i]*price[i];
  }
  printf("%lf\n",sum);
  return 0;
}
