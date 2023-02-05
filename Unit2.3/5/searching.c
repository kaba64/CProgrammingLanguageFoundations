#include <stdio.h>
int main(void){
  char word[51];
  int i=0,j,mid,found;
  scanf("%s",word);
  while(word[i]!='\0'){
    i++;
  }
  mid = i/2;
  found = 0;
  for(j=0;j<i;j++){
    if((word[j]=='t' | word[j]=='T') && j<=mid){
      printf("1\n");
      found = 1;
    }else if((word[j]=='t' | word[j]=='T') && j>mid){
      printf("2\n");
      found = 1;
    }
  }
  if(!found){
    printf("-1\n");
  }
  return 0;
}
