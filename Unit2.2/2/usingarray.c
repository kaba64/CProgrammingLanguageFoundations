#include <stdio.h>
int main(void){
  int number;
  scanf("%d",&number);
  double weigh[number],sum;
  int i;
  sum = 0.;
  for(i=0;i<number;i++){
    scanf("%lf",&weigh[i]);
    sum = sum + weigh[i];
  }
  sum = sum/number;
  for(i=0;i<number;i++){
    printf("%.1lf\n",sum-weigh[i]);
  }
  return 0;
}
