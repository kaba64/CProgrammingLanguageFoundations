#include <stdio.h>
int main(void){
  char name[50];
  int count=0; 
  scanf("%s",name);
  while(name[count]!='\0'){
    count++;
  }
  if(count%2==0){
    printf("1\n");
      }else{
    printf("2\n");
  }

  return 0;
}
