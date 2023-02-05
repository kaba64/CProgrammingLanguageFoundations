#include <stdio.h>
int main(void){
  int number, guess=0;
  int try=0;
  scanf("%d",&number);
  while (number!=guess){
    scanf("%d",&guess);
    try++;
    if(number>guess){
      printf("it is more\n");
	}
    if(number<guess){
      printf("it is less\n");
    }
  }
  printf("Number of tries needed:\n");
  printf("%d\n",try);
  return 0;
}
