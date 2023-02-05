#include <stdio.h>
int main(void){
  int expense, sum;
  scanf("%d",&expense);
  if(expense<=0){
      sum = 0;
  }else{
      sum = expense;
  }
  while(expense>=0){
    scanf("%d",&expense);
    if(expense>=0){
        sum = sum + expense;
    }
  }
  printf("%d\n",sum);
  return 0;
}
