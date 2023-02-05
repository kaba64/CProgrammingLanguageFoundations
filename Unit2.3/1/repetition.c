#include <stdio.h>
int main(void){
  int repetation;
  char word[101];
  int i;
  scanf("%d %s", &repetation,word);
  for (i=0;i<repetation;i++){
    printf("%s\n",word);
  }
  return 0;
}
